/*
** EPITECH PROJECT, 2020
** my_setenv
** File description:
** //
*/

#define _GNU_SOURCE
#include "../../include/my_src.h"

void my_setenv(char **env)
{
    int size = my_tablen(env);
    char **tab = my_malloc(env);

    size_t bufsize = 32;
    char *add_size = NULL;
    if (getline(&add_size, &bufsize, stdin) == -1)
        return;
    tab[size] = add_size;
    my_printf("%t", tab);
}
