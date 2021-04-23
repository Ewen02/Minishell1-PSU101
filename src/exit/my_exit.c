/*
** EPITECH PROJECT, 2020
** my_exit
** File description:
** //
*/

#include "my_src.h"

void my_exit(char **str)
{
    int size = my_tablen(str);

    if (size < 4) {
        my_printf("exit\n");
        exit(EXIT_SUCCESS);
    }
    else
        my_printf("exit: Expression Syntax.\n");
}