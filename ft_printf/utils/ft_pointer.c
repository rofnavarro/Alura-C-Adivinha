/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rofnavarro@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 14:54:05 by rferrero          #+#    #+#             */
/*   Updated: 2022/01/21 14:54:05 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pointer(long int pointer, int *length)
{
	if (pointer)
	{
		write (1, "0x", 2);
		*length += 2;
		ft_hexadecimal(pointer, 'x', length);
	}
	else
	{
		write (1, "(nil)", 5);
		*length += 5;
	}
}
