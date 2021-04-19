/*
** EPITECH PROJECT, 2020
** my_util lib
** File description:
** //
*/

#include "../include/my_src.h"

int my_getnbr(char *str)
{
    long result = 0, nbr = 0, sig = 0, j = 0, operator = 1;
    for (j = 0; str[j] != '\0'; j++)
        if (str[j] == '-')
            sig++;
        else if (str[j] <= '9' && str[j] >= '0')
            break;
    for (int i = j; str[i] <= '9' && str[i] >= '0' && str[i] != '\0'; i++)
        nbr++;
    for (int i = 0; i < (nbr - 1); i++)
        operator *= 10;
    for (int i = j; i != (nbr + j); i++)
    {
        result += ((str[i] - '0') * operator);
        operator = operator / 10;
    }
    if (sig % 2 == 1)
        result *= -1;
    if (result > 2147483647 || result < -2147483648)
        return 0;
    return ((int)result);
}

char *int_to_str(int nb, int pos, char *str)
{
    int result = 0;
    if (nb >= 0 && nb <= 9)
        str[pos] = ('0' + nb);
    if (nb > 9 || nb * -1 > 9){
        result = nb % 10;
        int_to_str(nb / 10, pos + 1, str);
        str[pos] = ('0' + result);
    }
    return str;
}

char *my_revstr(char *str)
{
    int size = 0;
    char t = ':';
    for (int i = 0; str[i] != '\0'; i++)
        size++;
    for (int i = 0; i < size; i++){
        t = str[size - 1];
        str[size - 1] = str[i];
        str[i] = t;
        size--;
    }
    return str;
}

char *my_itoa(int number)
{
    char *str = malloc(sizeof(char) * 12);
    for (int i = 0; i < 12; i++)
        str[i] = '\0';
    int_to_str(number, 0, str);
    return my_revstr(str);
}