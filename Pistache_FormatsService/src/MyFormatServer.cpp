#include <iostream>
#include <string>

#include "MyFormatServer.h"
#include "MyLib/MyLib_FormatUtility.h"

#include "rapidjson/document.h"
#include "rapidjson/writer.h"
#include "rapidjson/stringbuffer.h"

MyFormatServer::MyFormatServer()
{
    std::cout << "\nMyFormatServer instance constructed" << std::endl;
}

MyFormatServer::~MyFormatServer()
{
    std::cout << "\nMyFormatServer instance destroyed" << std::endl;
}

void MyFormatServer::onRequest(const Http::Request& request, Http::ResponseWriter response)
{
    using namespace rapidjson;
    
    if(request.resource() == "/formatservice")
    {
        std::string jsonReqBody = request.body();
        
        //const char* json = "{\"format\":\"dollar\",\"value\":\"123\",\"formattedValue\":\"\"}";
        Document formatServiceInput;
        formatServiceInput.Parse(jsonReqBody.c_str());

        Value& fi = formatServiceInput["format"];
        Value& vi = formatServiceInput["value"];
        Value& fvi = formatServiceInput["formattedValue"];

        StringBuffer fmv;
        Writer<StringBuffer> fmvWriter(fmv);
        fvi.Accept(fmvWriter);
        std::string formattedValue = fmv.GetString();
        removeChar(formattedValue, '"');
        removeChar(formattedValue, '\\');
        
        if(request.method() == Http::Method::Get)
        {
            StringBuffer fn;
            Writer<StringBuffer> fnWriter(fn);
            fi.Accept(fnWriter);
            std::string formatName = fn.GetString();
            removeChar(formatName, '"');
            removeChar(formatName, '\\');
            
            StringBuffer fv;
            Writer<StringBuffer> fvWriter(fv);
            vi.Accept(fvWriter);
            std::string formatValue = fv.GetString();
            removeChar(formatValue, '"');
            removeChar(formatValue, '\\');

            /*if(request.query().has("format"))
            {
                formatName = request.query().get("format").get();
            }
            if(request.query().has("value"))
            {
                formatValue = request.query().get("value").get();
            }*/

            if(!formatName.empty() && !formatValue.empty())
            {
                if(formatName.find("dollar") != std::string::npos)
                {
                    formattedValue = MyLib::FormatUtility::formatDollarInput(stod(formatValue));
                }
                else if(formatName.find("date") != std::string::npos)
                {
                    formattedValue = MyLib::FormatUtility::formatDateInput(stoi(formatValue));
                }
                else
                {
                    formattedValue = "Unimplemented format requested !";
                }
            }
            else
            {
                formattedValue = "Incorrect format query !";
            }
        }
        else
        {
            formattedValue = "Incorrect HTTP method !";
        }

        fvi.SetString(formattedValue.c_str(), formatServiceInput.GetAllocator());
        
        StringBuffer buffer;
        Writer<StringBuffer> writer(buffer);
        formatServiceInput.Accept(writer);

        std::string output(buffer.GetString());

        response.send(Pistache::Http::Code::Ok, output);
    }
    else
    {
        UNUSED(request);
        response.send(Http::Code::Not_Found);
    }
}

void MyFormatServer::removeChar(std::string & str, int c)
{
    int j, n = str.length(); 
    
    for (int i=j=0; i<n; ++i)
    {
        if (str[i] != c)
        {
            str[j++] = str[i];
        }
    }
      
    str[j] = '\0';
}