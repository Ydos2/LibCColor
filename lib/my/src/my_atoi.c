/*
** EPITECH PROJECT, 2020
** my_atoi
** File description:
** my_atoi
*/

static unsigned my_atoui(char *str)
{
    unsigned res = 0;

    for (; (*str >= '0') && (*str <= '9'); str++) {
        res *= 10;
        res += *str - '0';
    }
    return (res);
}

int	my_atoi(char *str)
{
    int	neg = 0;

    for (; *str == '-' || *str == '+'; str++)
        if (*str == '-')
            neg = !neg;
    if (neg)
        return (-((int) my_atoui(str)));
    else
        return ((int) my_atoui(str));
}