/*
** EPITECH PROJECT, 2020
** put the base  with color
** File description:
** print the alphabet in ascending order
*/

#include <unistd.h>

int my_putcolor(int nbr_color);

static void my_putstr(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        write(1, &str[i], 1);
}

int my_put_nbr_color(int nb, int color)
{
    int rtn = 0;

    my_putcolor(color);
    if (nb == -2147483648) {
        my_putstr("-2147483648");
        return (0);
    }
    if (nb < 0) {
        nb *= -1;
        write(1, "-", 1);
    }
    if (nb >= 10)
        my_put_nbr_color(nb / 10, color);
    rtn = nb % 10 + 48;
    write(1, &rtn, 1);
    my_putcolor(-1);
    return (0);
}
