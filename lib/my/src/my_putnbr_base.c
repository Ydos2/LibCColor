/*
** EPITECH PROJECT, 2020
** my_putnbr_base
** File description:
** my_putnbr_base
*/

#include <unistd.h>

static void my_putchar(char c)
{
    write(1, &c, 1);
}

static int my_strlen(char *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++);
    return (i);
}

int my_putnbr_base(int nbr, char *base)
{
    int len_base = my_strlen(base);

    if (nbr < 0) {
        nbr = nbr * -1;
        my_putchar('-');
    }
    if (nbr == 0)
    return (0);
    else
    my_putnbr_base(nbr / len_base, base);
    my_putchar(base[nbr % len_base]);
    return (0);
}