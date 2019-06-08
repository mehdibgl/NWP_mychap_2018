/*
** EPITECH PROJECT, 2019
** my_header
** File description:
** header
*/

#ifndef MY_CHAP_
#define MY_CHAP_

#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/ip.h>
#include <netinet/udp.h>

struct ip_t {
    unsigned char iph_ihl:5, iph_ver:4;
    unsigned char iph_tos;
    unsigned short int iph_len;
    unsigned short int iph_ident;
    unsigned char iph_flag;
    unsigned short int iph_offset;
    unsigned char iph_ttl;
    unsigned char iph_protocol;
    unsigned short int iph_chksum;
    unsigned int iph_sourceip;
    unsigned int iph_destip;
};

void network();
bool my_ad(char **av);
void all_socket(int *sd, struct ip_t *ip, struct sockaddr_in *sin);
bool port_adrs(char **av);
bool der_verif(char **av);

#endif
