/*
** EPITECH PROJECT, 2019
** first file
** File description:
** first file
*/

#include "my_hunter.h"

void initial(struct s_set_bird *bird_s)
{
    bird_s->rect.top = 0;
    bird_s->rect.left = 0;
    bird_s->rect.width = SP_WIDTH;
    bird_s->rect.height = 100;
    bird_s->speed = 1;
    bird_s->score = 0;
    bird_s->life = 3;
    bird_s->score_text = score();
    bird_s->gametime_text = gametime();
    bird_s->score_str = "0";
    bird_s->gametime_str = "0";
    bird_s->pos_bird.x = 0;
    bird_s->sfcgametime = sfClock_create();
    score_nb(bird_s);
    gametime_nb(bird_s);
}

void animate_sprite(struct s_set_bird *bird_s, sfClock *clock,
    struct s_set_bg *back)
{
    sfTime time = sfClock_getElapsedTime(clock);
    float rythm = (float)time.microseconds / 1000000.0;

    bird_s->pos_bird.x += 3 * bird_s->speed;
    if (bird_s->pos_bird.x >=
        (float)sfWindow_getSize((sfWindow *)back->window).x) {
        bird_s->pos_bird.x = 0 - SP_WIDTH;
        bird_s->pos_bird.y = rand() % 521;
        bird_s->life -= 1;
    }
    if (rythm >= 0.1) {
        bird_s->rect.left += SP_WIDTH;
        sfClock_restart(clock);
    }
    if (bird_s->rect.left == 480)
        bird_s->rect.left = 0;
}

void game_loop(struct s_set_bg *back, struct s_set_bird *bird_s,
    sfSprite **sprite, sfClock *sfc)
{
    animate_sprite(bird_s, sfc, back);
    show_game(back, bird_s, sprite);
    show_text(back, bird_s);
    while (sfRenderWindow_pollEvent(back->window, &back->event))
        manage_event(back, bird_s, sprite);
    manage_score(bird_s, back);
}

void go_game(struct s_set_bg *back, struct s_set_bird *bird_s)
{
    sfVideoMode video_mode = {1280, 720, 32};
    sfSprite **sprite = sprite_array();
    sfClock *sfc = sfClock_create();

    back->window = sfRenderWindow_create(video_mode, "My Hunter",
        sfDefaultStyle, NULL);
    sfRenderWindow_setFramerateLimit(back->window, 60);
    initial(bird_s);
    while (sfRenderWindow_isOpen(back->window)) {
        game_loop(back, bird_s, sprite, sfc);
    }
    destroy_all(back, bird_s, sprite);
}