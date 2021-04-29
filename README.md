# ProxyDesignPattern
A Proxy Design Pattern written in C++.
For CS372 Final at UAF Spring 2021.

Example code implementing a Proxy Design Pattern.
RealConnection allows all hostname requests to go through which (unimplimented) directs to hostname.
ProxyConnection uses the Proxy Design Pattern to first check if the hostname entered is in the banned list. If it is banned, access is denied and it isn't passed to the RealConnection. If it is allowed it passes connection to RealConnection and it is handeled normally.

Resources Used:
https://refactoring.guru/design-patterns/proxy


To run:
```C++
make 
./main
```
