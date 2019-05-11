#include <sys/socket.h>
#include <netdb.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define SOCKET_ERROR -1

int requests_function(const char url_method_check[2056]){
	/*
	* this function is used to test
	* if the server exists __requests_function()__.
	*/
	struct addrinfo ptr_req, *res;
	int    SOCKET_SUCCESS;

	memset(&ptr_req, 0, sizeof ptr_req);
	ptr_req.ai_family=AF_UNSPEC;

	/*
	* We send the quest with the sockets..
	* with socket and pointers.
	*/

	ptr_req.ai_socktype = SOCK_STREAM;
	getaddrinfo(url_method_check, "80", &ptr_req, &res);
	getaddrinfo(url_method_check, "443", &ptr_req, &res);

	SOCKET_SUCCESS = socket(res->ai_family, res->ai_socktype, res->ai_protocol);
	if(connect(SOCKET_SUCCESS, res->ai_addr, res->ai_addrlen) == SOCKET_ERROR){
		return SOCKET_ERROR;
	} else {
		return SOCKET_SUCCESS;
	}
}

int main(void) {
	printf("%d\n", requests_function("google.com"));
    return 0;
}
