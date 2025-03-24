// Kushal Nandi
// Date - 24/3/25

#ifndef Binding_Socket_hpp
#define Binding_Socket_hpp

#include <stdio.h>
#include "Simple_Socket.hpp"

namespace sde
{

// Binding_Socket class is being 'INHERITED' from Simple_Socket to use all the functions
class Binding_Socket : public Simple_Socket
{
public:
// The BindingSocket constructor takes the same parameters as SimpleSocket 
// and passes them to the parent class's constructor.
    // Constructor
    Binding_Socket(int domain , int service , int protocol , int port ,
        u_long interface);

    // Virtual Function
//  The connectToNetwork() virtual function is overridden in BindingSocket to
// implement the bind() system call
    int connect_to_network(int sock , struct sockaddr_in address)
};
}

#endif