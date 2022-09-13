/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putvax2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarval < frcarval@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 23:48:22 by frcarval          #+#    #+#             */
/*   Updated: 2021/12/10 20:38:19 by frcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putvax2(va_list *args)
{
	unsigned int	x2;

	x2 = va_arg(*args, int);
	ft_baser(x2, "0123456789ABCDEF");
	return (ft_nbrlen(x2, 16));
}
