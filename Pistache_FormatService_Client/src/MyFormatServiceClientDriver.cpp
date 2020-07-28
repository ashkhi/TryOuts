#include <atomic>

#include "pistache/client.h"
#include "pistache/http.h"
#include "pistache/net.h"

using namespace Pistache;
using namespace Pistache::Http;

int main(int argc, char *argv[])
{
    if (argc < 6)
    {
        std::cout << "Please provide required command line arguments" << std::endl;
        std::cout << "1. Executable name" << std::endl;
        std::cout << "2. Server name" << std::endl;
        std::cout << "3. Port number" << std::endl;
        std::cout << "4. Service name" << std::endl;	
        std::cout << "5. Format name" << std::endl;
        std::cout << "6. Value to be formatted" << std::endl;
        return 1;
    }

    std::string url("http://");
    std::string serverName(argv[1]);
    std::string port(argv[2]);
    std::string serviceEndpoint(argv[3]);
    std::string formatName(argv[4]);
    std::string value(argv[5]);

    url = url + serverName + ":";
    url = url + port + "/";
    url = url + serviceEndpoint + "?";
    url = url + "format=" + formatName + "&";
    url = url + "value=" + value;

    std::string page = url;
        
    Http::Client client;

    auto opts = Http::Client::options().threads(1).maxConnectionsPerHost(1);
    client.init(opts);

    auto resp = client.get(page).send();

    resp.then([&](Http::Response response)
    {
		std::cout << "code " << response.code() << std::endl;
        std::cout << "body " << response.body() << std::endl;
    }, Async::IgnoreException);

    sleep(1);

    client.shutdown();
}