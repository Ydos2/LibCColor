/*
** EPITECH PROJECT, 2019
** my_print_alpha.c
** File description:
** print the alphabet in ascending order
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    if (s1 == 0 || s2 == 0 || n == 0)
        return (0);
    for (int i = 0; s1[i] != '\0' && s2[i] != '\0' && i < n; i++)
        if (s1[i] != s2[i])
            return ((s1[i] > s2[i]) ? i + 1 : -i - 1);
    return (0);
}