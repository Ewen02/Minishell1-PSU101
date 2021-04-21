/*
** EPITECH PROJECT, 2020
** my_setenv
** File description:
** //
*/

#define _GNU_SOURCE
#include "../../include/my_src.h"

static char **anti_backslach2(char **str, int i, int j)
{
    if (str[i][j] == '\n')
        str[i][j] = '\0';
    return str;
}


static char **anti_backslach(char **str)
{
    for (int i = 0; str[i]; i++)
        for (int j = 0; str[i][j]; j++)
            str = anti_backslach2(str, i, j);
    return str;
}

void my_setenv(env_t *envi, char **str)
{
    int size = my_tablen(envi->tab);
    char **new_tab = my_malloc(envi->tab);

    new_tab[size] = my_strdup(str[1]);
    envi->tab = new_tab;
    envi->tab[size + 1] = NULL;
    envi->tab = anti_backslach(envi->tab);
    my_printf("%t", envi->tab);
}
