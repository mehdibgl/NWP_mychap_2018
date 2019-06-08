/*
** EPITECH PROJECT, 2019
** NWP_mychap
** File description:
** adresse
*/

#include "my_header.h"

void all_socket(int *sd, struct ip_t *ip, struct sockaddr_in *sin)
{
    *sd = socket(AF_INET, SOCK_RAW, IPPROTO_RAW);
    ip->iph_ihl = 5;
    ip->iph_ver = 4;
    ip->iph_tos = 10;
    ip->iph_len = sizeof(struct ip_t);
    ip->iph_ident = htons(200);
    ip->iph_ttl = 1;
    ip->iph_protocol = 17;
    ip->iph_sourceip = inet_addr("127.0.0.1");
    ip->iph_chksum = 3;
}

bool port_adrs(char **av)
{
    if (strcmp("--port", av[3]) == 0 || strcmp("-p", av[3]) == 0) {
        if (atoi(av[4]) < 0)
            return (false);
        return (true);
    }
    return (false);
}

bool der_verif(char **av)
{
    if (strcmp("--password", av[5]) == 0 || strcmp("-P", av[5]) == 0)
       return (true);
    return (false);
}
