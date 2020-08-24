/*
** EPITECH PROJECT, 2024
** MUL_my_hunter_2019
** File description:
** Created by Enzo Ventura
*/

#include <stdlib.h>

int my_intlen(int nb);

char *my_itoa(int nb)
{
    int size = my_intlen(nb);
    char *str = malloc(sizeof(char) * size + 1);

    for (int i = size - 1; i >= 0; i--) {
        str[i] = (nb % 10) + '0';
        nb = nb / 10;
    }
    str[size] = '\0';
    return str;
}