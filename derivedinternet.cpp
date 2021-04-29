#include "derivedinternet.hpp"

 void RealConnection::request(string hostname) {
      std::cout << "RealConnection is handeling the request.\n";
      std::cout << "Routing to " << hostname << std::endl;
      // Route to hostname here
  }

  bool ProxyConnection::checkAccess(string hostname) const {
      if (std::find(bannedHostnames.begin(), bannedHostnames.end(), hostname) != bannedHostnames.end()){
         return false;
      }
      else {
          return true;
      }
  }

  void ProxyConnection::request(string hostname) {
      if (this->checkAccess(hostname)) {
        this->_real->request(hostname);
      }
      else {
        std::cout << "Access denied. Banned hostname.\n";
      }
  } 