#pragma once
#include "pistache/endpoint.h"

using namespace Pistache;

class MyFormatServer : public Http::Handler
{
    public:
        MyFormatServer();
        ~MyFormatServer();

        HTTP_PROTOTYPE(MyFormatServer)
        void onRequest(const Http::Request& request, Http::ResponseWriter response) override;
};