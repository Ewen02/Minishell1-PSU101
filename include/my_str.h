/*
** EPITECH PROJECT, 2020
** my_str
** File description:
** //
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/wait.h>

#pragma once

void my_putchar(char c);
int my_putstr (char const *str);
int my_strlen (char const *str);
char *my_strcat(char *str1, char *str2);
int my_strcmp(char  const *s1 , char  const *s2);
char *my_strncpy(char *dest, char const *src, int n);
int my_strncmp(char const *s1, char const *s2, int n);
char **split(char *str);
char *my_strcpy(char *dest, char const *src);
int my_strlentab(char **tab);