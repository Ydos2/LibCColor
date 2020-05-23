/*
** EPITECH PROJECT, 2020
** it put with color
** File description:
** a string on ur terminal.
*/

#include <unistd.h>

int my_putcolor(int nbr_color);

void my_putchar_color(char c, int color)
{
    my_putcolor(color);
    write(1, &c, 1);
    my_putcolor(-1);
}