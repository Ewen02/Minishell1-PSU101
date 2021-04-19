/*
** EPITECH PROJECT, 2020
** my_env
** File description:
** //
*/

#include "../../include/my_src.h"

static int my_tabcount(char **env)
{
    int size = 0;

    for (int i = 0; env[i] != NULL; i++, size++);
    return (size);
}

char **my_env(char **env)
{
    int size = my_tabcount(env);
    char **tab;

    tab =  malloc(sizeof(char *) * (size + 1));
    for (int i = 0; env[i] != NULL; i++) {
        tab[i] = my_strdup(env[i]);
    }
    tab[size] = NULL;
    my_printf("%t", tab);
    return (tab);
}