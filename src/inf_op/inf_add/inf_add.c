/*
** EPITECH PROJECT, 2021
** inf_add
** File description:
** add infin add
*/

#include <stdlib.h>
#include "my.h"

char *infinadd(char *nb1, char *nb2);

char *nbr_to_str(int n);

char *smalladd(char *nb1, char *nb2)
{
    int nbr1 = 0;
    int nbr2 = 0;
    int res = 0;

    nbr1 = my_getnbr(nb1);
    nbr2 = my_getnbr(nb2);
    res = nbr1 + nbr2;
    return nbr_to_str(res);
}

char *inf_add(char *nb1, char *nb2)
{
    char *res;

    if (my_strlen(nb1) <= 9 && my_strlen(nb2) <= 9)
        res = smalladd(nb1, nb2);
    else if (my_str_isnum(nb1) && my_str_isnum(nb2))
        res = infinadd(nb1, nb2);
    else
        exit(84);
    return res;
}
