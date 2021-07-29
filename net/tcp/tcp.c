#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <netinet/in.h>

int make_socket(uint16_t port)
{
    int sock;
    struct sockaddr_in name;
    //创建字节流的ipv4的socket
    sock = socket(PF_INET, SOCK_STREAM, 0);
    if (sock < 0) {
        perror("socket");
        exit(EXIT_FAILURE);
    }
    //绑定ip和port
    name.sin_family = AF_INET; //ipv4
    name.sin_port = port; //端口
    name.sin_addr.s_addr = htonl(INADDR_ANY);//统配地址
    if (bind(sock, (struct sockaddr *)&name, sizeof(name)) < 0) {
        perror("error");
        exit(EXIT_FAILURE);
    }
    return sock;
}
int main(int argc, char * argv[]) 
{
    int sockfd = make_socket(9001);
    exit(0);
}

