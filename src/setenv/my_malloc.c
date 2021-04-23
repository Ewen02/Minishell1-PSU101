/*
** EPITECH PROJECT, 2021
** //
** File description:
** //
*/

#include "my_src.h"

char **my_malloc(char **envi, int size)
{
    int i = 0;
    char **tab = NULL;

    tab = malloc(sizeof(char *) * (size + 2));
    tab[size + 1] = NULL;
    for (i = 0; envi[i]; i++)
        tab[i] = my_strdup(envi[i]);
    return tab;
}