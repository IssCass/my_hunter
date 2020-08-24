/*
** EPITECH PROJECT, 2019
** my_strcat.c
** File description:
** task01
*/

int my_strlen(char const *dest);

char *my_strcat(char *dest, char const *src)
{
    int length = my_strlen(dest);
    int i;
    int k;

    for (i = 0; dest[i] != '\0'; i++);
    for (k = 0; src[k] != '\0'; i++, k++)
        dest[i] = src[k];

    dest[i] = '\0';
    return (dest);
}
