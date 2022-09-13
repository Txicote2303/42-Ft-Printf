/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putvanrd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarval < frcarval@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:19:13 by frcarval          #+#    #+#             */
/*   Updated: 2021/12/10 20:34:33 by frcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putvanrd(va_list *args)
{
	int	d;

	d = va_arg(*args, int);
	if (d == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (d < 0)
	{
		write(1, "-", 1);
		d *= -1;
		return (ft_putnbr(d) + 1);
	}	
	return (ft_putnbr(d));
}
