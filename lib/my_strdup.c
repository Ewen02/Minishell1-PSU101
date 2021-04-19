/*
** EPITECH PROJECT, 2021
** my_strdup
** File description:
** //
*/

#include "../include/my_src.h"

char *my_strdup(char const *src)
{
    char *dest;

    dest = malloc(sizeof(char) * (my_strlen(src) + 1));
    dest = my_strcpy(dest, src);
    return (dest);
}