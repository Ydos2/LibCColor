/*
** EPITECH PROJECT, 2019
** it put
** File description:
** a string on ur terminal.
*/

#include <unistd.h>

void my_put_error(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        write(2, &str[i], 1);
}
