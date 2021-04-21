/*
** EPITECH PROJECT, 2020
** my_env
** File description:
** //
*/

#include "my_src.h"

char **my_env(env_t *envi)
{
    my_printf("%t", envi->tab);
    return (envi->tab);
}