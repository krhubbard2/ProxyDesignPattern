#ifndef DERIVEDINTERNET_HPP
#define DERIVEDINTERNET_HPP

#include "internet.hpp"

class RealConnection : public Internet {
  public:
    void request(string hostname) override;
};

class ProxyConnection : public Internet {
  public:
    ProxyConnection(RealConnection *real) : _real(new RealConnection(*real)) {}
    void request(string hostname) override;

    ~ProxyConnection() {
        delete _real;
    }
  private:
    bool checkAccess(string hostname) const;
    RealConnection *_real;
    vector<string> bannedHostnames = {"www.google.com"};
};

#endif