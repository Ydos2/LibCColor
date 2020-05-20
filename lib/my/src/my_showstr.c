/*
** EPITECH PROJECT, 2019
** it put
** File description:
** a string on ur terminal.
*/

#include <unistd.h>

int my_putnbr_base(int nbr, char *base);

static void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_showstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] > 31 && str[i] < 127) {
            write(1, &str[i], 1);
        } else {
            write(1, "\\", 1);
            (str[i] < 11) ? my_putchar('0') : 0;
            my_putnbr_base(str[i], "0123456789abcdef");
        }
    }
    return (0);
}