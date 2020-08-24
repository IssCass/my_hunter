/*
** EPITECH PROJECT, 2024
** MUL_my_hunter_2019
** File description:
** Created by Enzo Ventura
*/

#include "my_hunter.h"

sfVector2f int_to_float_vector(sfVector2i pos)
{
    sfVector2f vect_f = {(float)pos.x, (float)pos.y};
    return (vect_f);
}