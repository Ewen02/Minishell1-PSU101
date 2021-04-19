/*
** EPITECH PROJECT, 2021
** my_strncpy
** File description:
** //
*/

#include "../include/my_src.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    for (; src[i] != '\0' && i < n; i++)
        dest[i] = src[i];
    if (i == n)
        dest[i] = '\0';
    return (dest);
}
