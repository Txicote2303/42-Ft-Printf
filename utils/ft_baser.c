/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_baser.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarval < frcarval@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 23:47:23 by frcarval          #+#    #+#             */
/*   Updated: 2021/12/10 20:10:43 by frcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_baser(unsigned long long int nbr, char *base)
{
	unsigned int	base_detector;

	base_detector = ft_strlen(base);
	if (nbr >= base_detector)
		ft_baser (nbr / base_detector, base);
	write (1, &base[nbr % base_detector], 1);
}
