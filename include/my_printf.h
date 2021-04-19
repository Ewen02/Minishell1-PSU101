/*
** EPITECH PROJECT, 2020
** my_printf
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
#include <sys/types.h>
#include <sys/wait.h>

#pragma once

char printf_s (va_list arg);
void printf_d (va_list arg);
void printf_c (va_list arg);
void my_printf (char *str, ...);
int my_put_nbr(int nb);
void print_tab(va_list arg);