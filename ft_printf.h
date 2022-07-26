/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmachaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 12:15:17 by kmachaka          #+#    #+#             */
/*   Updated: 2022/07/26 12:27:12 by kmachaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int		ft_printf_char(char c);
int		ft_printf_str(char *s);
int		ft_printf_number(int num);
int		ft_printf_hex(size_t num, char *base);
int		ft_type(const char c, va_list args);
int		ft_printf_ptr(void *ptr);
int		ft_printf_u(unsigned int num);
int		ft_printf(const char *format, ...);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);

#endif
