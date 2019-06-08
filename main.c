/*
** EPITECH PROJECT, 2019
** NWP_mychap
** File description:
** my_main
*/

#include "my_header.h"

int main(int ac, char **av)
{
    if (ac != 7 || !der_verif(av))
        return (84);
    if (!my_ad(av) || !port_adrs(av))
        return (84);
    network();
    return (0);
}
