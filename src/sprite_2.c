/*
** EPITECH PROJECT, 2024
** MUL_my_hunter_2019
** File description:
** Created by Enzo Ventura
*/

#include "my_hunter.h"

sfText *score(void)
{
    char *str = "Score :";
    sfFont *font_score = sfFont_createFromFile(
        "ressources/Righteous-Regular.ttf");
    sfText *text = sfText_create();

    sfText_setFont(text, font_score);
    sfText_setColor(text, sfBlack);
    sfText_setString(text, str);
    sfText_setCharacterSize(text, 40);

    return (text);
}

void display_score(struct s_set_bird *bird_s)
{
    char *str;

    str = my_itoa(bird_s->score);
    sfText_setString(bird_s->score_nb_str, str);
}

void score_nb(struct s_set_bird *bird_s)
{
    sfFont *font_score_nb = sfFont_createFromFile(
        "ressources/Righteous-Regular.ttf");
    bird_s->score_nb_str = sfText_create();

    sfText_setFont(bird_s->score_nb_str, font_score_nb);
    sfText_setColor(bird_s->score_nb_str, sfBlack);
    sfText_setString(bird_s->score_nb_str, bird_s->score_str);
    sfText_setCharacterSize(bird_s->score_nb_str, 40);
}

sfText *gametime(void)
{
    char *str = "Gametime : ";
    sfFont *font_gametime = sfFont_createFromFile(
        "ressources/Righteous-Regular.ttf");
    sfText *text = sfText_create();

    sfText_setFont(text, font_gametime);
    sfText_setColor(text, sfBlack);
    sfText_setString(text, str);
    sfText_setCharacterSize(text, 40);

    return (text);
}

void gametime_nb(struct s_set_bird *bird_s)
{
    sfFont *font_gametime_nb = sfFont_createFromFile(
        "ressources/Righteous-Regular.ttf");
    bird_s->gametime_nb_str = sfText_create();

    sfText_setFont(bird_s->gametime_nb_str, font_gametime_nb);
    sfText_setColor(bird_s->gametime_nb_str, sfBlack);
    sfText_setString(bird_s->gametime_nb_str, bird_s->gametime_str);
    sfText_setCharacterSize(bird_s->gametime_nb_str, 40);
}