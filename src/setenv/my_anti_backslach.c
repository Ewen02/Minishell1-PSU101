/*
** EPITECH PROJECT, 2020
** my_setenv
** File description:
** //
*/

#include "my_src.h"

static char **anti_backslach2(char **str, int i, int j)
{
    if (str[i][j] == '\n')
        str[i][j] = '\0';
    return str;
}

char **anti_backslach(char **str)
{
    for (int i = 0; str[i]; i++)
        for (int j = 0; str[i][j]; j++)
            str = anti_backslach2(str, i, j);
    return str;
}