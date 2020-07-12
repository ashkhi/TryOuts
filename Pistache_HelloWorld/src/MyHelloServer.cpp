#include "MyHelloServer.h"

void MyHelloServer::onRequest(const Http::Request& request, Http::ResponseWriter response)
{
    UNUSED(request);
    response.send(Pistache::Http::Code::Ok, "Hey, Welcome to Pistache !\n");
}