// Kushal Nandi


#include "Simple_Socket.hpp"


sde::Simple_Socket::Simple_Socket(int domain , int service , int protocol , int port , u_long interface)
{
    address.sin_family = domain;
    // "host to network short" and function used in networking programming to convert a 
    // 16-bit unsigned integer from host byte order to network byte order (big-endian). 
    address.sin_port = htons(port);

    address.sin_addr.s_addr = htonl(interface);



    // If we declare 'sock' here then when the 'constructor' is done 
    // running the variable will not 'exist' anymore
    sock = socket(domain , service , protocol);
    test_connection(sock);
}

// Test Connection Virtual Function
void sde::Simple_Socket::test_connection(int to_test)
{
    if (to_test < 0)
    {
        perror("Failed to connect..");
        exit(EXIT_FAILURE);
    }
    
}

// Getter Function
struct sockaddr_in sde::Simple_Socket::get_address()
{
    return address;
}

int sde::Simple_Socket::get_sock()
{
    return sock;
}

int sde::Simple_Socket::get_connection()
{
    return connection;
}

// Setter Function
void sde::Simple_Socket::set_connection(int con)
{
    connection = con;
}