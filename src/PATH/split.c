/*
** EPITECH PROJECT, 2020
** bootstrap minishell
** File description:
** task_04
*/

#include "../../include/my_src.h"

char **split(char *str)
{
    char **av;
    int str_nb = 1;

    for (int i = 0; str[i]; i++)
        if (str[i] == ':')
            str_nb++;
    av = malloc(sizeof(char *) * (str_nb + 2));
    av[0] = malloc(sizeof(char) * (my_strlen(str) + 2));
    for (int i = 0, j = 1, str_size = 0; str[i] != '\0'; i++) {
        str_size++;
        if (str[i] == ':') {
            av[j] = malloc(sizeof(char) * (str_size + 2));
            j++, str_size = 0; }
    }
    for (int i = 0, j = 0, k = 0; str[i] != '\0'; i++, k++) {
        if (str[i] == ':') {
            av[j][k] = '\0';
            j++, k = 0, i++;
        }
        av[j][k] = str[i];
    }
    return av;
}
