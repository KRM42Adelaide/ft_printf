#include "ft_printf.h"

int ft_printf_str(char *str)
{
    size_t  i;

    i = 0;
    if (str == NULL)
    {
        ft_putstr_fd("(null)", 1);
        return (6);
    }
    while (str[i])
    {
        ft_printf_char(str[i]);
        i++;
    }
    return (i);
}