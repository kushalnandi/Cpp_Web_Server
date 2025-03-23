// Kushal Nandi

// A .hpp file is a C++ header file, used to store declarations that can be included in other .cpp files using the #include directive 

#ifndef Simple_Socket_hpp
#define Simple_Socket_hpp

#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <iostream>


// namespace that will refer to all the objects int this library
namespace sde 
{
    class Simple_Socket
    {
    private:
    // hold an IPv4 address, including the port number and the IP address
        struct sockaddr_in address;
        int sock;
        int connection;
    public:
        // Default Constructor
        Simple_Socket(int domain , int service , int protocol , int port , u_long interface);

        virtual int connect_to_network(int sock , struct sockaddr_in address) = 0;
        
        void test_connection(int);

        struct sockaddr_in get_address();
        int get_sock();
        int get_connection();
    };
       
}
#endif 

