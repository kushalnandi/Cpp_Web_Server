// Kushal Nandi
// Date - 24/3/25

#include "Binding_Socket.hpp"

sde::Binding_Socket::Binding_Socket(int domain , int service , int protocol , int port , u_long interface) : 
    Simple_Socket(domain , service , protocol , port , interface)
{
    set_connection(connect_to_network(get_sock() , get_address()));
    test_connection(get_connection());
}


// Implementation of the connect_to_network Virtual Function
int sde::Binding_Socket::connect_to_network(int sock , struct sockaddr_in address)
{
    return bind(sock , (struct sockaddr *)& address , sizeof(address));
}