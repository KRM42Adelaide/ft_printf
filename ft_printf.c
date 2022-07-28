/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmachaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 12:06:37 by kmachaka          #+#    #+#             */
/*   Updated: 2022/07/26 12:14:56 by kmachaka         ###   ########.fr       */
/*                                                                             */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	va_list	args;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[++i])
		{
			count += ft_type(format[i], args);
			i++;
		}
		if (format[i] && format[i] != '%')
		{
			ft_printf_char(format[i]);
			i++;
			count++;
		}
	}
	va_end(args);
	return (count);
}