#ifndef INTERNET_HPP
#define INTERNET_HPP

#include <iostream>
using std::string;
#include <vector>
using std::vector;
#include <algorithm> // for std::find

// Base Class 
class Internet {
  public:
    virtual void request(string hostname) = 0;
}; // End class Internet

#endif