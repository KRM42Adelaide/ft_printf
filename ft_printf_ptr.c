/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmachaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 09:49:14 by kmachaka          #+#    #+#             */
/*   Updated: 2022/08/03 15:34:51 by kmachaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_ptr(void *ptr)
{
	int	count;

	count = 0;
	ft_putstr_fd("0x", 1);
	count += 2;
	count += ft_printf_hex((size_t)ptr, "0123456789abcdef");
	return (count);
}
