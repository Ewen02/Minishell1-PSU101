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

char **my_env(env_t *envi)
{
    my_printf("%t", envi->tab);
    return (envi->tab);
}