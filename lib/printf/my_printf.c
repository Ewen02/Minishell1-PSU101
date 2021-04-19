/*
** EPITECH PROJECT, 2020
** printf project
** File description:
** main
*/

#include "../../include/my_src.h"

void detection_flags (char *str, int i, va_list arg)
{
    switch (str[i]) {

        case 'd':
            printf_d(arg);
            break;
        case 's':
            printf_s(arg);
            break;
        case 'c':
            printf_c(arg);
            break;
        case 't':
            print_tab(arg);
            break;
        default:
            break;
    }
}

void my_printf (char *str, ...)
{
    va_list arg;
    va_start(arg, str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i + 1] == '+') {
            my_putchar('+');
            i = i + 2;
            detection_flags(str, i, arg);
        }
        else if (str[i] != '%')
            my_putchar(str[i]);
        else {
            i = i + 1;
            detection_flags(str, i, arg);
        }
    }
}
