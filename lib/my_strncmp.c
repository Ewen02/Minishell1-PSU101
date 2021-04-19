/*
** EPITECH PROJECT, 2021
** my_strncmp
** File description:
** //
*/

#include "../include/my_src.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    while (s1[i] == s2[i] && s1[i] && s2[i] && i + 1 < n)
        i++;
    return (s1[i] - s2[i]);
}
