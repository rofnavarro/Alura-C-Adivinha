/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rofnavarro@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 20:27:48 by rferrero          #+#    #+#             */
/*   Updated: 2022/01/21 21:19:04 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_digits(unsigned int n)
{
	int	counter;

	counter = 1;
	while (n != 0)
	{
		n = n / 10;
		if (n != 0)
			counter++;
	}
	return (counter);
}

static char	*ft_unsigned_itoa(unsigned int n)
{
	int		size;
	char	*str;

	size = ft_digits(n);
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (0);
	str[size] = '\0';
	while (size)
	{
		str[size - 1] = (n % 10) + '0';
		n = n / 10;
		size--;
	}
	return (str);
}

void	ft_unsigned_int(unsigned int n, int *length)
{
	char	*ret;

	ret = ft_unsigned_itoa(n);
	ft_string(ret, length);
	free (ret);
}
