#pragma once
#include "pistache/endpoint.h"

using namespace Pistache;

class MyHelloServer : public Http::Handler
{
    public:
        MyHelloServer();
        ~MyHelloServer();

        HTTP_PROTOTYPE(MyHelloServer)
        void onRequest(const Http::Request& request, Http::ResponseWriter response) override;
};