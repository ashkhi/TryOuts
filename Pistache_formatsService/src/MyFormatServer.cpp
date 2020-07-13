#include <iostream>
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
    UNUSED(request);
    response.send(Pistache::Http::Code::Ok, MyLib::FormatUtility::formatDollarInput(101.5));
}