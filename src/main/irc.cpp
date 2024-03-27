/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   irc.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles-f <rteles-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:05:27 by rteles-f          #+#    #+#             */
/*   Updated: 2024/03/27 20:19:13 by rteles-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_irc.hpp>

#include <iostream>
#include <string>

void    end_chat(int server, int fd1, int fd2)
{
    close(fd1);
    close(fd2);
    close(server);
    exit(0);
}

int main(int ac, char **args)
{
    t_protocol  *tcp;
    t_sock      sock;
    int         server_fd;
    int         test;
    int         size;
    int         port;
    int         fd1;
    int         fd2;
    char        buffer[1024];
    // Server      server;

    // sigaction();
    if (ac != 2)
        return (write(2, "Usage: ./program <port number>\n", 32));
    port = atoi(args[1]);
    tcp = getprotobyname("tcp");
    server_fd = socket(AF_INET, SOCK_STREAM, tcp->p_proto);
    sock.sin_family = AF_INET;
    sock.sin_addr.s_addr = INADDR_ANY;
    sock.sin_port = htons(port);
    bind(server_fd, (struct sockaddr*)&sock, sizeof(sock));
    listen(server_fd, 0);
    size = sizeof(struct sockaddr_in);
    bzero(buffer, 1024);
    while (!*buffer)
        recv(server_fd, (void *)buffer, 1024, MSG_PEEK);
    printf("%s\n", buffer);
    // if ((fd1 = accept(server_fd, (sockaddr *)&sock, (socklen_t *)&size)) > 0) {
    //     // bzero(buffer, 1024);
    //     // recv(fd1, (void *)buffer, 1024, 0);
            
            
    //     // send(fd1, "001 Welcome to the IRC server\r\n", 31, 0);
    //     // send(fd1, "002 Your host is Me\r\n", 21, 0);
    //     // if (strstr(buffer, "PING") != NULL) {
    //     //     send(fd1, "PONG :<token>\r\n", 15, 0);
    //     // }
    //     // printf("receive: %s\n", buffer);
    //     // bzero(buffer, 1024);
    //     // recv(fd1, (void *)buffer, 1024, 0);
    //     // printf("receive: %s\n", buffer);
    //     // printf("connection %i.\n", fd1);
    // }
    // else
    //     printf("fail.\n");
    // // bzero(buffer, 1024);
    // // sleep(3);
    // // recv(fd1, (void *)buffer, 1024, 0);
    // // printf("receive: %s\n, fd %i ", buffer);
    // if ((fd2 = accept(server_fd, (sockaddr *)&sock, (socklen_t *)&size)) > 0) {
    //     // send(fd2, (void *)"NOTICE", 7, 0); 
    //     printf("connection %i.\n", fd2);
    // }
    // else
    //     printf("fail.\n");
    // while (1) {
    //     recv(fd1, (void *)buffer, 1024, 0);
    //     if (*buffer) {
    //         if (!strcmp(buffer, "QUIT\n"))
    //             end_chat(server_fd, fd1, fd2);
    //         send(fd2, (void *)"User 1:\n", 9, 0);
    //         send(fd2, (void *)buffer, strlen(buffer), 0);
    //         send(fd1, (void *)"\n", 1, 0);
    //         send(fd2, (void *)"\n", 1, 0);
    //         send(fd1, (void *)"User 1:\n", 9, 0);
    //         if (!strcmp(buffer, "JOIN"))
    //             send(fd1, "you JOIN #3\r\n", 14, 0);
    //     }
    //     bzero(buffer, 1024);
    //     recv(fd2, (void *)buffer, 1024, 0);
    //     if (*buffer) {
    //         send(fd1, (void *)"User 2:\n", 9, 0);
    //         send(fd1, (void *)buffer, strlen(buffer), 0);
    //         send(fd1, (void *)"\n", 1, 0);
    //         send(fd2, (void *)"\n", 1, 0);
    //         send(fd2, (void *)"User 2:\n", 9, 0);
    //     }
    //     bzero(buffer, 1024);
    // }
}
