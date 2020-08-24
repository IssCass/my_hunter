/*
** EPITECH PROJECT, 2019
** second filer
** File description:
** second file
*/

#include "my_hunter.h"

sfSprite *bg(struct s_set_bg *bg_s)
{
    bg_s->backg = sfTexture_createFromFile("ressources/bg.jpg", NULL);
    bg_s->sprite_backg = sfSprite_create();
    sfSprite_setTexture(bg_s->sprite_backg, bg_s->backg, sfFalse);
    return (bg_s->sprite_backg);
}

sfSprite *bird(struct s_set_bird *bird_s)
{
    sfVector2f pos_bird = {0, 0};

    bird_s->bird = sfTexture_createFromFile("ressources/bat.png", NULL);
    bird_s->sprite_bird = sfSprite_create();
    sfSprite_setTexture(bird_s->sprite_bird, bird_s->bird, sfFalse);
    sfSprite_setPosition(bird_s->sprite_bird, pos_bird);
    return (bird_s->sprite_bird);
}

sfSprite *cursor(struct s_set_bird *bird_s)
{
    sfVector2f scale_vector = {RED_RP, RED_RP};
    bird_s->cursor = sfTexture_createFromFile("ressources/crosshair.png", NULL);
    bird_s->sprite_cursor = sfSprite_create();
    sfSprite_setTexture(bird_s->sprite_cursor, bird_s->cursor, sfFalse);
    sfSprite_setScale(bird_s->sprite_cursor, scale_vector);
    return (bird_s->sprite_cursor);
}

sfSprite **sprite_array(void)
{
    struct s_set_bg bg_s;
    struct s_set_bird bird_s;

    sfSprite **array = malloc(sizeof(sfSprite *) * (NB_SPRITE + 1));
    array[BACKG] = bg(&bg_s);
    array[BIRD] = bird(&bird_s);
    array[CURSOR] = cursor(&bird_s);
    return (array);
}