/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rofnavarro@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 21:58:57 by rferrero          #+#    #+#             */
/*   Updated: 2022/01/21 21:26:50 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_class(const char *str, va_list args, int *length);

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		length;

	length = 0;
	va_start(args, str);
	ft_class(str, args, &length);
	va_end(args);
	return (length);
}

void	ft_class(const char *str, va_list args, int *length)
{
	while (*str)
	{
		if (*str != '%')
			ft_char(*str, length);
		else
		{
			str++;
			if (*str == '%')
				ft_char(*str, length);
			if (*str == 'c')
				ft_char(va_arg(args, int), length);
			if (*str == 's')
				ft_string(va_arg(args, char *), length);
			if (*str == 'p')
				ft_pointer(va_arg(args, long int), length);
			if (*str == 'd' || *str == 'i')
				ft_int(va_arg(args, int), length);
			if (*str == 'u')
				ft_unsigned_int(va_arg(args, unsigned int), length);
			if (*str == 'x' || *str == 'X')
				ft_hexadecimal(va_arg(args, unsigned int), *str, length);
		}
		str++;
	}
}
