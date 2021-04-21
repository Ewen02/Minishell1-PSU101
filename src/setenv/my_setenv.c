/*
** EPITECH PROJECT, 2020
** my_setenv
** File description:
** //
*/

#define _GNU_SOURCE
#include "../../include/my_src.h"

void my_setenv(env_t *envi, char **str)
{
    int size = my_tablen(envi->tab);
    int size2 = my_strlen(str[1]);
    char **new_tab = my_malloc(envi->tab);

    new_tab[size] = my_strdup(str[1]);
    envi->tab = new_tab;
    envi->tab[size + 1] = NULL;
    my_printf("%t", envi->tab);
    my_printf("str = [%d]", size2);
}
