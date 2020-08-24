/*
** EPITECH PROJECT, 2024
** MUL_my_hunter_2019
** File description:
** Created by Enzo Ventura
*/

#include "my_hunter.h"

void manage_score(struct s_set_bird *bird_s, struct s_set_bg *back)
{
    if (bird_s->score < 0) {
        my_printf("VOUS AVEZ PERDU\n");
        sfRenderWindow_close(back->window);
        result(bird_s);
    }
    if (bird_s->life <= 0) {
        my_printf("VOUS AVEZ PERDU\n");
        sfRenderWindow_close(back->window);
        result(bird_s);
    }
    if (bird_s->score >= 100) {
        my_printf("VOUS AVEZ GAGNE\n");
        sfRenderWindow_close(back->window);
        result(bird_s);
    }
}

void shoot(struct s_set_bird *bird_s, sfMouseButtonEvent *event,
    sfSprite **array)
{
    sfVector2f pos_array = sfSprite_getPosition(array[BIRD]);

    if ((pos_array.x < event->x) &&
        (event->x < pos_array.x + SP_WIDTH && pos_array.y < event->y) &&
        (event->y < pos_array.y + SP_WIDTH)) {
        bird_s->pos_bird.x = 0 - SP_WIDTH;
        bird_s->pos_bird.y = rand() % 521;
        bird_s->speed += 0.3;
        bird_s->score += 3;
    } else
        bird_s->score -= 2;
}

void result(struct s_set_bird *bird_s)
{
    my_printf("----------------------------------\n");
    my_printf("Votre score final : %i\n", bird_s->score);
    my_printf("Votre temps de jeu total est de %s seconds.\n",
        bird_s->str_time);
    my_printf("----------------------------------\n");
}