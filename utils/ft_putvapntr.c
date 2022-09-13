/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putvapntr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarval < frcarval@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:10:32 by frcarval          #+#    #+#             */
/*   Updated: 2021/12/10 20:35:15 by frcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putvapntr(va_list *args)
{
	unsigned long int	x;

	x = va_arg(*args, unsigned long int);
	write(1, "0x", 2);
	ft_baser(x, "0123456789abcdef");
	return (ft_nbrlen(x, 16) + 2);
}
