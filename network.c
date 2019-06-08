/*
** EPITECH PROJECT, 2019
** NWP_mychap
** File description:
** network
*/

#include "my_header.h"

void check_ip(char *av)
{
    int get = 0;
    for (int i = 0; av[i] != '\0'; i++) {
        if (av[i] == '.')
            get++;
    }
    if (get != 3) {
        printf("No such host name: '%s'\n", av);
        exit(84);
    }
}

bool my_ad(char **av)
{
    if (strcmp("--target", av[1]) == 0 || strcmp("-t", av[1]) == 0) {
        if (strcmp("localhost", av[2]) != 0)
            check_ip(av[2]);
        return (true);
    }
    return (false);
}

void network()
{
    int sd;
    char buffer[200];
    struct ip_t *ip = (struct ip_t *) buffer;
    struct sockaddr_in sin;
    int one = 1;
    const int *val = &one;
    memset(buffer, 0, 200);
    sin.sin_family = AF_INET;
    sin.sin_port = htons(4242);
    sin.sin_addr.s_addr = inet_addr("127.0.0.1");
    all_socket(&sd, ip, &sin);
    setsockopt(sd, IPPROTO_IP, IP_HDRINCL, val, sizeof(one));
    printf("KO\n");
}
