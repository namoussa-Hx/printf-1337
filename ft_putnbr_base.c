/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoussa <namoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 18:31:19 by namoussa          #+#    #+#             */
/*   Updated: 2023/11/22 21:36:55 by namoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_tolower(int c)
{
	return (c + 32 * (c >= 'A' && c <= 'Z'));
}

int	ft_putnbr_base(long nbr, int base, unsigned char is_upper)
{
	char	*arr;
	int		printed;

	printed = 0;
	arr = "0123456789ABCDEF";
	if (nbr < 0)
	{
		printed += ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr >= base)
	{
		printed += ft_putnbr_base(nbr / base, base, is_upper);
		return (printed += ft_putnbr_base(nbr % base, base, is_upper));
	}
	else
	{
		if (is_upper)
			ft_putchar(arr[nbr]);
		else
			ft_putchar(ft_tolower(arr[nbr]));
		printed++;
	}
	return (printed);
}
