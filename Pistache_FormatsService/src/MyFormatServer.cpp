#include <iostream>
#include <string>
#include "MyFormatServer.h"
#include "MyLib/MyLib_FormatUtility.h"

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
    if(request.resource() == "/formatservice")
    {
        std::string formattedValue;

        if(request.method() == Http::Method::Get)
        {
            std::string formatName;
            std::string formatValue;

            if(request.query().has("format"))
            {
                formatName = request.query().get("format").get();
            }
            if(request.query().has("value"))
            {
                formatValue = request.query().get("value").get();
            }

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

        response.send(Pistache::Http::Code::Ok, formattedValue);
    }
    else
    {
        UNUSED(request);
        response.send(Http::Code::Not_Found);
    }
}