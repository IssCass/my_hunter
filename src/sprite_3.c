/*
** EPITECH PROJECT, 2024
** MUL_my_hunter_2019
** File description:
** Created by Enzo Ventura
*/

#include "my_hunter.h"

void display_gametime(struct s_set_bird *bird_s)
{
    sfTime game = sfClock_getElapsedTime(bird_s->sfcgametime);
    int gettime = (int)game.microseconds / 1000000.0;

    bird_s->str_time = my_itoa(gettime);
    sfText_setString(bird_s->gametime_nb_str, bird_s->str_time);
}