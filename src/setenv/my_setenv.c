/*
** EPITECH PROJECT, 2020
** my_setenv
** File description:
** //
*/

#define _GNU_SOURCE
#include "my_src.h"

static int count(char **env)
{
    int size = 1;

    for (int i = 1; env[i]; i++)
        for (; env[i][size]; size++);
    return (size);
}

static char *add_new(char **src, int sizetab)
{
    int size = count(src);
    char *str = malloc(sizeof(char) * (size + 1));

    src = anti_backslach(src);
    if (sizetab == 2)
        str = my_strcat(src[1], "=");
    if (sizetab == 3) {
        str = my_strcat(src[1], "=");
        str = my_strcat(str, src[2]);
    }
    return str;
}

void my_setenv(env_t *envi, char **str)
{
    int size = my_tablen(envi->tab);
    int sizestr = my_tablen(str);
    char **new_tab = NULL;
    char *new_str = NULL;

    if (sizestr == 2 || sizestr == 3) {
        new_tab = my_malloc(envi->tab, size);
        new_str = add_new(str, sizestr);
        new_tab[size] = my_strdup(new_str);
        envi->tab = new_tab;
        envi->tab[size + 1] = NULL;
        envi->tab = anti_backslach(envi->tab);
    }
    else if (sizestr == 1)
        my_printf("%t", envi->tab);
    else
        my_printf("setenv: Too many arguments.\n");
}
