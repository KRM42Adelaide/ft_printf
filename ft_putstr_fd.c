#include "ft_printf.h"

void    ft_putstr_fd(char *str, int fd)
{
    int i;

    i = 0;
    if (str)
    {
        while (str[i])
        {
            ft_putchar_fd(str[i], fd);
            i++;
        }
    }
}