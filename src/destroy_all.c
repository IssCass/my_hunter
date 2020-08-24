/*
** EPITECH PROJECT, 2024
** MUL_my_hunter_2019
** File description:
** Created by Enzo Ventura
*/

#include "my_hunter.h"

void free_all(sfSprite **array)
{
    free(array);
}

void destroy_all(struct s_set_bg *back, struct s_set_bird *bird_s,
    sfSprite **array)
{
    sfSprite_destroy(array[BIRD]);
    sfSprite_destroy(array[CURSOR]);
    sfText_destroy(bird_s->score_text);
    sfText_destroy(bird_s->score_nb_str);
    sfSprite_destroy(array[BACKG]);
    sfRenderWindow_destroy(back->window);
    free_all(array);
}