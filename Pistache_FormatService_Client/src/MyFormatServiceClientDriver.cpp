#include <fstream>

#include "pistache/client.h"
#include "pistache/http.h"
#include "pistache/net.h"

using namespace Pistache;
using namespace Pistache::Http;

int main(int argc, char *argv[])
{
    if (argc < 4)
    {
        std::cout << "Please provide required command line arguments" << std::endl;
        std::cout << "1. Executable name" << std::endl;
        std::cout << "2. Server name" << std::endl;
        std::cout << "3. Port number" << std::endl;
        std::cout << "4. Service name" << std::endl;
        return 1;
    }

    std::string url("http://");
    std::string serverName(argv[1]);
    std::string port(argv[2]);
    std::string serviceEndpoint(argv[3]);
    
    url = url + serverName + ":";
    url = url + port + "/";
    url = url + serviceEndpoint;

    std::string page = url;
        
    Http::Client client;

    auto opts = Http::Client::options().threads(1).maxConnectionsPerHost(1);
    client.init(opts);

	std::ifstream file ("../resource/formatServiceInput.json");
	if(!file)
	{
		std::cout << "unable to access json input" << std::endl;
		return 1;
	}

	std::string jsonReqBody;
	getline (file, jsonReqBody);
	
	file.close();

    auto resp = client.get(page).body(jsonReqBody).send();

    resp.then([&](Http::Response response)
    {
		std::cout << "code " << response.code() << std::endl;
        std::cout << "body " << response.body() << std::endl;
    }, Async::IgnoreException);

    sleep(3);

    client.shutdown();
}