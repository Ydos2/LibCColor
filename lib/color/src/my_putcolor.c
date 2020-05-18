/*
** EPITECH PROJECT, 2020
** my_putcolor
** File description:
** my_putcolor
*/

#include <unistd.h>

static void my_putstr(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        write(1, &str[i], 1);
}

static int my_put_nbr(int nb)
{
    int rtn = 0;

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

void color(int i)
{
    int result;

    if (i < 0 || i > 7)
        result = 0;
    else
        result = 30 + i;
    my_putstr("\033[1;3;");
    my_put_nbr(result);
    write(1, "m", 1);
}

int my_putcolor(char *str, int i)
{
    if (str[i] >= '0' && str[i] <= '7')
        color(str[i] - 48);
    else {
        color(-1);
        i--;
    }
    return (i);
}