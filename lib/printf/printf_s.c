/*
** EPITECH PROJECT, 2020
** printf_project
** File description:
** %s, print char *
*/

#include "../../include/my_src.h"

char printf_s (va_list arg)
{
    char *str = va_arg(arg, char *);

    return (my_putstr(str));
}
