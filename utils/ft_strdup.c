/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarval < frcarval@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 23:50:46 by frcarval          #+#    #+#             */
/*   Updated: 2021/12/10 20:38:24 by frcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_strdup(const	char *s1)
{
	char	*string;
	int		i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	string = (char *)malloc((sizeof(char) * i) + 1);
	if (!string)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		string[i] = s1[i];
		i++;
	}
	string[i] = '\0';
	return (string);
}
