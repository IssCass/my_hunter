/*
** EPITECH PROJECT, 2019
** my_hunter.h
** File description:
** my_hunter.h
*/

#ifndef MY_HUNTER_H
#define MY_HUNTER_H

#define NB_SPRITE               4
#define CH_SIZE                 980
#define SP_WIDTH                160
#define RED_RP                  0.06

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>
#include "my.h"

enum game_sprite
{
    BACKG,
    BIRD,
    CURSOR,
};

struct s_set_bg
{
    sfRenderWindow *window;
    sfTexture *backg;
    sfSprite  *sprite_backg;
    sfEvent event;
};

struct s_set_bird
{
    sfIntRect rect;
    sfTexture *bird;
    sfSprite *sprite_bird;
    sfVector2f pos_bird;
    sfTexture *cursor;
    sfSprite *sprite_cursor;
    sfVector2f mouse;
    int crosshair_x;
    int crosshair_y;
    float speed;
    int life;
    int score;
    char *score_str;
    sfText *score_text;
    sfText *score_nb_str;
    sfClock *sfcgametime;
    char *gametime_str;
    sfText *gametime_text;
    sfText *gametime_nb_str;
    char *str_time;
};

int main();
void initial(struct s_set_bird *bird_s);
sfVector2f int_to_float_vector(sfVector2i pos);
void display_score(struct s_set_bird *bird_s);
void score_nb(struct s_set_bird *bird_s);
void gametime_nb(struct s_set_bird *bird_s);
sfText *gametime();
void display_gametime(struct s_set_bird  *bird_s);
void destroy_all(struct s_set_bg *back, struct s_set_bird *bird_s,
    sfSprite **array);
void result(struct s_set_bird *bird_s);

sfSprite **sprite_array(void);
sfSprite *bird(struct s_set_bird *bird_s);
sfText *score();
sfSprite *bg(struct s_set_bg *bg_s);

void show_game(struct s_set_bg *back, struct s_set_bird *bird_s,
    sfSprite **array);
void show_text(struct s_set_bg *back, struct s_set_bird *bird_s);

void manage_event(struct s_set_bg *back, struct s_set_bird *bird_s,
    sfSprite **sprite);
void shoot(struct s_set_bird *bird_s, sfMouseButtonEvent *event,
    sfSprite **array);
void manage_score(struct s_set_bird *bird_s, struct s_set_bg *back);

void game_loop(struct s_set_bg *back, struct s_set_bird *bird_s,
    sfSprite **sprite, sfClock *sfc);
void go_game(struct s_set_bg *back, struct s_set_bird *bird_s);
sfVector2f pos_crosshair(struct s_set_bg const *back);

#endif