/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoussa <namoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:24:19 by namoussa          #+#    #+#             */
/*   Updated: 2023/11/22 21:49:17 by namoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int		ft_putchar(int c);
int		ft_putstr(char *str);
int		ft_address(unsigned long n);
int		ft_printf(const char *str, ...);
int		ft_putnbr_base(long nbr, int base, unsigned char is_upper);

#endif
