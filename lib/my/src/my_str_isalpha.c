/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** my_revstr
*/

int my_str_isalpha(char const *str)
{
    if (str == 0)
        return (1);
    for (int i = 0; str[i] != '\0';) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            i++;
        else if (str[i] >= 'a' && str[i] <= 'z')
            i++;
        else
            return (0);
    }
    return (1);
}