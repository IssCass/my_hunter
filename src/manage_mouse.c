/*
** EPITECH PROJECT, 2024
** MUL_my_hunter_2019
** File description:
** Created by Enzo Ventura
*/

#include "my_hunter.h"

void manage_event(struct s_set_bg *back, struct s_set_bird *bird_s,
    sfSprite **sprite)
{
    if (back->event.type == sfEvtClosed || sfKeyboard_isKeyPressed(sfKeyEscape))
        sfRenderWindow_close(back->window);
    if (back->event.type == sfEvtMouseButtonPressed) {
        shoot(bird_s, &back->event.mouseButton, sprite);
    }
}

sfVector2f pos_crosshair(struct s_set_bg const *back)
{
    sfVector2f pos_cross = int_to_float_vector(
        sfMouse_getPosition((sfWindow *)back->window));
    pos_cross.x -= ((CH_SIZE * RED_RP) / 2);
    pos_cross.y -= ((CH_SIZE * RED_RP) / 2);
    sfRenderWindow_setMouseCursorVisible(back->window, sfFalse);
    return (pos_cross);
}