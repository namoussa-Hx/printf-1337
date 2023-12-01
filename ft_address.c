/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_address.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoussa <namoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:16:17 by namoussa          #+#    #+#             */
/*   Updated: 2023/11/23 18:05:55 by namoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_address(unsigned long nbr)
{
	char	*arr;
	int		printed;

	printed = 0;
	arr = "0123456789abcdef";
	if (nbr >= 16)
	{
		printed += ft_address(nbr / 16);
		return (printed += ft_address(nbr % 16));
	}
	else
	{
		ft_putchar(arr[nbr]);
		printed++;
	}
	return (printed);
}
