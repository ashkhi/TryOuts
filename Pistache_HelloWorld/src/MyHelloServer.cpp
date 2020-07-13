#include <iostream>
#include "MyHelloServer.h"

MyHelloServer::MyHelloServer()
{
    std::cout << "\nMyHelloServer instance constructed" << std::endl;
}

MyHelloServer::~MyHelloServer()
{
    std::cout << "\nMyHelloServer instance destroyed" << std::endl;
}

void MyHelloServer::onRequest(const Http::Request& request, Http::ResponseWriter response)
{
    UNUSED(request);
    response.send(Pistache::Http::Code::Ok, "Hey, Welcome to Pistache !\n");
}