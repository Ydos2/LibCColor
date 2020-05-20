/*
** EPITECH PROJECT, 2019
** my_print_alpha.c
** File description:
** print the alphabet in ascending order
*/

#include <unistd.h>

static void my_putstr(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        write(1, &str[i], 1);
}

int my_put_nbr(int nb)
{
    int rtn = 0;

    if (nb == -2147483648) {
        my_putstr("-2147483648");
        return (0);
    }
    if (nb < 0) {
        nb *= -1;
        write(1, "-", 1);
    }
    if (nb >= 10)
        my_put_nbr(nb / 10);
    rtn = nb % 10 + 48;
    write(1, &rtn, 1);
    return (0);
}
