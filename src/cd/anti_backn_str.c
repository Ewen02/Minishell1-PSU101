/*
** EPITECH PROJECT, 2020
** my_cd
** File description:
** //
*/

#include "my_src.h"

char *anti_backn_string(char *str)
{
    int size = my_strlen(str);

    for (int i = 0; i < size; i++)
        if (str[i] == '\n')
            str[i] = '\0';
    return str;
}