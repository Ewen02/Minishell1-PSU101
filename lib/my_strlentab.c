/*
** EPITECH PROJECT, 2021
** //
** File description:
** //
*/

#include "../include/my_utils.h"
#include "../include/my_str.h"
#include "../include/my_printf.h"
#include "../include/my_src.h"

int my_strlentab(char **tab)
{
    int count = 0;

    for (int i = 0; tab[i] != NULL; i++)
        count++;
    return count;
}
