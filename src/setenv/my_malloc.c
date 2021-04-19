/*
** EPITECH PROJECT, 2021
** //
** File description:
** //
*/

#include "../../include/my_src.h"

char **my_malloc(char **env)
{
    int i = 0;
    int size = 0;
    char **tab;

    for (int j = 0; env[j] != NULL; j++, size++);
    tab =  malloc(sizeof(char *) * size + 1);
    for (i = 0; env[i] != NULL; i++) {
        tab[i] = my_strdup(env[i]);
    }
    tab[i + 1] = NULL;
    return tab;
}