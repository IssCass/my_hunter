/*
** EPITECH PROJECT, 2024
** MUL_my_hunter_2019
** File description:
** Created by Enzo Ventura
*/

#include "my_hunter.h"

void usage_prog(void)
{
    my_printf("USAGE\n");
    my_printf(
        "\tYou are a hunter, you must shoot a bat and you must to get "
        "the higest score.\n");
    my_printf("DESCRIPTION\n");
    my_printf("\tESC : quit the game\n");
    my_printf("\tMouse left : shoot\n");
}

int main(int ac, char **av)
{
    struct s_set_bg back;
    struct s_set_bird bird_s;

    if (ac == 2 && my_strcmp(av[1], "-h") == 0) {
        usage_prog();
        return (0);
    } else
        go_game(&back, &bird_s);
    return (0);
}