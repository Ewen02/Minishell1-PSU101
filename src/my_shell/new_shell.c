/*
** EPITECH PROJECT, 2020
** my_shell
** File description:
** //
*/

#define _GNU_SOURCE
#include "my_src.h"

static int count(char **src)
{
    int size;

    for (size = 0; src[size]; size++);
    return size;
}

static char **malloc_env(env_t envi, char **tab)
{
    int size = count(tab);
    envi.tab = malloc(sizeof(char *) * (size + 1));
    envi.tab[size] = NULL;

    for (int i = 0; tab[i]; i++)
        envi.tab[i] = my_strdup(tab[i]);
    return envi.tab;
}

int new_shell(char **env)
{
    env_t envi = {0};
    char *buffer = NULL;
    size_t bufsize = 32;
    int isatt = 0;

    envi.tab = malloc_env(envi, env);
    buffer = (char *)malloc(bufsize * sizeof(char));
    while (1) {
        if(isatty(isatt) != 0)
            my_printf("ewen@ewen-pc$>");
        if (getline(&buffer, &bufsize, stdin) == -1)
            return 0;
        else if (my_strlen(buffer) > 1)
            diff_bin_cmd(&envi, buffer);
    }
    return 0;
}