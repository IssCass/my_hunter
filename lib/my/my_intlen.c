/*
** EPITECH PROJECT, 2024
** MUL_my_hunter_2019
** File description:
** Created by Enzo Ventura
*/

int my_intlen(int nb)
{
    int size;

    for (size = 1; nb > 9; size++) {
        nb /= 10;
    }
    return size;
}