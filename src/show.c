/*
** EPITECH PROJECT, 2024
** MUL_my_hunter_2019
** File description:
** Created by Enzo Ventura
*/

#include "my_hunter.h"

void show_text(struct s_set_bg *back, struct s_set_bird *bird_s)
{
    sfVector2f pos_score = {1050, 630};
    sfVector2f pos_score_nb = {1190, 630};
    sfVector2f pos_gametime = {10, 630};
    sfVector2f pos_gametime_nb = {220, 630};

    sfText_setPosition(bird_s->gametime_text, pos_gametime);
    sfRenderWindow_drawText(back->window, bird_s->gametime_text, NULL);
    display_gametime(bird_s);
    sfText_setPosition(bird_s->gametime_nb_str, pos_gametime_nb);
    sfRenderWindow_drawText(back->window, bird_s->gametime_nb_str, NULL);
    sfText_setPosition(bird_s->score_text, pos_score);
    sfRenderWindow_drawText(back->window, bird_s->score_text, NULL);
    display_score(bird_s);
    sfText_setPosition(bird_s->score_nb_str, pos_score_nb);
    sfRenderWindow_drawText(back->window, bird_s->score_nb_str, NULL);
}

void show_game(struct s_set_bg *back, struct s_set_bird *bird_s,
    sfSprite **array)
{
    sfVector2f pos_cross = pos_crosshair(back);

    sfRenderWindow_clear(back->window, sfBlack);
    sfRenderWindow_drawSprite(back->window, array[BACKG], NULL);
    sfSprite_setTextureRect(array[BIRD], bird_s->rect);
    sfRenderWindow_drawSprite(back->window, array[BIRD], NULL);
    sfSprite_setPosition(array[BIRD], bird_s->pos_bird);
    sfSprite_setPosition(array[CURSOR], pos_cross);
    sfRenderWindow_drawSprite(back->window, array[CURSOR], NULL);
    show_text(back, bird_s);
    sfRenderWindow_display(back->window);
}