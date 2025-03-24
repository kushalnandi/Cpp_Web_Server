// Kushal Nandi
// Date - 24/3/25


#ifndef Connecting_Socket_hpp
#define Connecting_Socket_hpp

#include <stdio.h>
#include "Simple_Socket.hpp"

namespace sde
{
class Connecting_Socket : public Simple_Socket
{
public : 
    Connecting_Socket(int domain . int service , int protocol , int port , 
        u_long interface);

    // Virtual Function
    int connect_to_network(int sock , struct sockaddr_in address);
};

} // namespace sde

#endif