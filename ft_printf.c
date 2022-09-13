/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarval < frcarval@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:36:23 by frcarval          #+#    #+#             */
/*   Updated: 2021/12/10 21:07:37 by frcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char	*string, ...)
{
	int		counter;
	int		total;
	va_list	args;

	counter = -1;
	total = 0;
	va_start(args, string);
	while (++counter < ft_strlen((char *)string))
	{
		if (arg_ver((char *)string, counter) == 1)
		{
			write(1, "%", 1);
			total += 1;
		}
		if (arg_ver((char *)string, counter) == 2)
		{
			write(1, &string[counter], 1);
			total += 1;
		}
		else
			total += distro(counter++, (char *)string, &args);
	}
	va_end(args);
	return (total);
}
