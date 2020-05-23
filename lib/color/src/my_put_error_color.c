/*
** EPITECH PROJECT, 2020
** it put error with error
** File description:
** a string on ur terminal.
*/

#include <unistd.h>

int my_putcolor(int nbr_color);

void my_put_error_color(char *str, int color)
{
    my_putcolor(color);
    for (int i = 0; str[i] != '\0'; i++)
        write(2, &str[i], 1);
    my_putcolor(-1);
}
