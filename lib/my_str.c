/*
** EPITECH PROJECT, 2020
** my_str lib
** File description:
** //
*/

#include "../include/my_src.h"

void my_putchar(char c)
{
    write(1 , &c , 1);
}

int my_putstr (char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i = i + 1;
    }
}

int my_strlen (char const *str)
{
    int i = 0;

    while (str[i] != '\0')
        i = i + 1;
    return (i);
}

char *my_strcat(char *str1, char *str2)
{
    int i = 0;
    int size = my_strlen(str1) + (my_strlen(str2));
    char *result;

    result = malloc(sizeof(char) * (my_strlen(str1) + (my_strlen(str2))) + 10);
    for (int j = 0 ; i < size && str1[j] != '\0'; i++, j++)
        result[i] = str1[j];
    for (int j = 0; i < size && str2[j] != '\0'; i++, j++) {
        result[i] = str2[j];
        result[i + 1] = '\0';
    }
    return (result);
}

int my_strcmp(char  const *s1 , char  const *s2)
{
    int i = 0;

    while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
        i++;
    return (s1[i] - s2[i]);
}