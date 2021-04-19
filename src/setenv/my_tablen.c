/*
** EPITECH PROJECT, 2021
** //
** File description:
** //
*/

#include "../../include/my_src.h"

int my_tablen(char **env)
{
    int size = 0;

    for (int i = 0; env[i] != NULL; i++, size++);
    return (size);
}
