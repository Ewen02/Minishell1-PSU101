/*
** EPITECH PROJECT, 2021
** //
** File description:
** //
*/

#include "my_src.h"

char **my_str_to_tab(char *buffer, char letter)
{
    char **tab = NULL;
    int count_tab = 1;
    int size = 0, count = 0;

    for (int i = 0; buffer[i] != '\0'; i++, size++);
    for (int i = 0; buffer[i] != '\0'; i++)
        if (buffer[i] == letter)
            count_tab++;
    tab = malloc(sizeof(char *) * (size + 1));
    for (int i = 0, j = 0; i < count_tab; i++) {
        if (buffer[count] == letter)
            j = 0, buffer += 1;
        tab[i] = malloc(sizeof(char) * (size + 1));
        for (j = 0; buffer[count] != letter && buffer[count] != '\0'; j++) {
            tab[i][j] = buffer[count];
            tab[i][j + 1] = '\0';
            count++;
        }
    }
    return tab;
}