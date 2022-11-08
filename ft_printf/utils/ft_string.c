/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rofnavarro@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 00:25:14 by rferrero          #+#    #+#             */
/*   Updated: 2022/01/21 21:11:22 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_string(char *str, int *length)
{
	if (str)
	{
		write (1, str, ft_strlen(str));
		*length += ft_strlen(str);
	}
	else
	{
		write (1, "(null)", 6);
		*length += 6;
	}
}
