/*
** EPITECH PROJECT, 2020
** my_util
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
#include <signal.h>

#pragma once

int my_getnbr(char *str);
char *my_itoa(int number);
char *int_to_str(int nb, int pos, char *str);
char *my_revstr(char *str);