#include "internet.hpp"
#include "derivedinternet.hpp"

void connectClient(Internet &internet, string hostname){
    internet.request(hostname);
}

int main() {
    RealConnection *real = new RealConnection;
    ProxyConnection *proxy = new ProxyConnection(real);

    // Banned Site (in proxy)
    string banned = "www.google.com";

    // Allowed site (all)
    string allowed = "www.youtube.com";

    std::cout << "Calling allowed site on RealConnection.\n";
    connectClient(*real, allowed);
    std::cout << "Calling banned site on RealConnection.\n";
    connectClient(*real, banned);

    std::cout << "Calling allowed site on ProxyConnection.\n";
    connectClient(*proxy, allowed);
    std::cout << "Calling banned site on ProxyConnection.\n";
    connectClient(*proxy, banned);

    delete real;
    delete proxy;
    return 0;
}