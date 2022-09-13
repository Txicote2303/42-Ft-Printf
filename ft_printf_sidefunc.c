/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_sidefunc.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarval < frcarval@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:54:13 by frcarval          #+#    #+#             */
/*   Updated: 2021/12/10 20:02:09 by frcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	arg_ver(char *string, int counter)
{
	if (string[counter] == '%' && string[counter + 1] == '%')
		return (1);
	if ((string[counter] != '%') || (string[counter] != '%' && (string
				[counter + 1] != 'c' || string[counter + 1] != 's' || string
				[counter + 1] != 'p' || string[counter + 1] != 'd' || string
				[counter + 1] != 'i' || string[counter + 1] != 'u' || string
				[counter + 1] != 'x' || string[counter + 1] != 'X')))
		return (2);
	else
		return (0);
}

int	distro(int counter, char *string, va_list *args)
{
	if (string[counter + 1] == 'c')
		return (ft_putvachr(args));
	if (string[counter + 1] == 's')
		return (ft_putvastr(args));
	if (string[counter + 1] == 'p')
		return (ft_putvapntr(args));
	if (string[counter + 1] == 'd')
		return (ft_putvanrd(args));
	if (string[counter + 1] == 'i')
		return (ft_putvanri(args));
	if (string[counter + 1] == 'u')
		return (ft_putvanru(args));
	if (string[counter + 1] == 'x')
		return (ft_putvax1(args));
	if (string[counter + 1] == 'X')
		return (ft_putvax2(args));
	else
		return (0);
}
