/*
** EPITECH PROJECT, 2021
** //
** File description:
** //
*/

#include "../../include/my_src.h"

char **my_malloc(char **envi)
{
    int i = 0;
    int size = 0;
    char **tab = NULL;

    for (int size = 0; envi[size]; size++);
    tab = malloc(sizeof(char *) * (size + 1));
    for (i = 0; envi[i]; i++) {
        tab[i] = my_strdup(envi[i]);
    }
    tab[i + 1] = NULL;
    return tab;
}