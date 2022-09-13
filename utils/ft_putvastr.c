/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putvastr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarval < frcarval@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:05:07 by frcarval          #+#    #+#             */
/*   Updated: 2021/12/10 20:36:29 by frcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putvastr(va_list *args)
{
	char	*s;
	int		counter;

	s = va_arg(*args, char *);
	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	counter = 0;
	while (s[counter])
	{
		write(1, &s[counter], 1);
		counter++;
	}
	return (ft_strlen(s));
}
