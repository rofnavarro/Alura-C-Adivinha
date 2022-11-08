/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:54:03 by rferrero          #+#    #+#             */
/*   Updated: 2022/04/25 18:11:05 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include "./libft/libft.h"

# define HEXA_LOWER "0123456789abcdef"
# define HEXA_UPPER "0123456789ABCDEF"

int		ft_printf(const char *str, ...);
void	ft_class(const char *str, va_list args, int *length);

void	ft_char(char c, int *length);
void	ft_hexadecimal(unsigned long int n, char case_sensitive, int *length);
void	ft_int(int n, int *length);
void	ft_pointer(long int pointer, int *length);
void	ft_string(char *str, int *length);
void	ft_unsigned_int(unsigned int n, int *length);

#endif