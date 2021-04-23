/*
** EPITECH PROJECT, 2020
** my_unsetenv
** File description:
** //
*/

#include "my_src.h"

static int count(char **env)
{
    int size = 1;

    for (int i = 1; env[i]; i++)
        for (; env[i][size]; size++);
    return (size);
}

static char *unset_new(char **src, int sizetab)
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

static char **unset_string(char **str, char *unset)
{
    for (int i = 0; str[i]; i++) {
        if (my_strcmp(str[i], unset) == 0)
            str[i] = NULL;
    }
    return str;
}

void my_unsetenv(env_t *envi, char **str)
{
    int size = my_tablen(envi->tab) - 1;
    int sizestr = my_tablen(str);
    char **new_tab = NULL;
    char *unset_str = NULL;

    if (sizestr > 1) {
        new_tab = my_malloc(envi->tab, size);
        unset_str = unset_new(str, sizestr);
        new_tab = unset_string(new_tab, unset_str);
        envi->tab = new_tab;
        envi->tab[size + 1] = NULL;
        envi->tab = anti_backslach(envi->tab);
    }
    else
        my_printf("unsetenv: Too few arguments.\n");
}