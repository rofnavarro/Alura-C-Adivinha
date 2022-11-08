/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rofnavarro@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 15:09:52 by rferrero          #+#    #+#             */
/*   Updated: 2022/01/21 20:30:51 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexadecimal(unsigned long int n, char case_sensitive, int *length)
{
	char	hexadecimal[64];
	int		counter;

	counter = 0;
	if (n == 0)
	{
		counter = 1;
		hexadecimal[0] = '0';
	}
	while (n)
	{
		if (case_sensitive == 'x')
			hexadecimal[counter] = HEXA_LOWER[n % 16];
		else
			hexadecimal[counter] = HEXA_UPPER[n % 16];
		n = n / 16;
		counter++;
	}
	*length += counter;
	while (counter)
	{
		write (1, &hexadecimal[counter - 1], 1);
		counter--;
	}
}
