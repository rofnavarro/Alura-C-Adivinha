/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rofnavarro@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 13:53:25 by rferrero          #+#    #+#             */
/*   Updated: 2022/01/21 15:29:44 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_int(int n, int *length)
{
	char	*str;

	str = ft_itoa(n);
	ft_string(str, length);
	free (str);
}
