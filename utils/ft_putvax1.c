/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putvax1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarval < frcarval@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 23:17:04 by frcarval          #+#    #+#             */
/*   Updated: 2021/12/10 20:38:01 by frcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putvax1(va_list *args)
{
	unsigned int	x1;

	x1 = va_arg(*args, int);
	ft_baser(x1, "0123456789abcdef");
	return (ft_nbrlen(x1, 16));
}
