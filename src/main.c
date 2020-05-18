/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include "color.h"
#include "my.h"

int main(int ac, char **av)
{
    (void)ac;
    (void)av;
    my_putcolor("#1", 1);
    my_putstr("The lib is compile !\n");
    color(-1);
    return (0);
}