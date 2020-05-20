/*
** EPITECH PROJECT, 2019
** my_print_alpha.c
** File description:
** print the alphabet in ascending order
*/

char *my_strlowcase(char *str)
{
    if (str == 0)
        return (0);
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    return (str);
}