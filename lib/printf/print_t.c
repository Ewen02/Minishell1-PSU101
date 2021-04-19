/*
** EPITECH PROJECT, 2020
** printf_projet
** File description:
** %t, print char**
*/

#include "../../include/my_src.h"

void print_tab(va_list arg)
{
    char **tab = va_arg(arg, char **);

    for (int i = 0; tab[i] != NULL; i++)
        my_printf("%s\n", tab[i]);
}