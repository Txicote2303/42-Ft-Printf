/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarval < frcarval@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:38:10 by frcarval          #+#    #+#             */
/*   Updated: 2021/12/11 18:40:13 by frcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int			ft_nbrlen(unsigned long long int nbr, int base);
void		ft_baser(unsigned long long int nbr, char *base);
long int	ft_putnbr(long int n);
int			ft_putvachr(va_list *args);
int			ft_putvanrd(va_list *args);
int			ft_putvanri(va_list *args);
int			ft_putvanru(va_list *args);
int			ft_putvapntr(va_list *args);
int			ft_putvastr(va_list *args);
int			ft_putvax1(va_list *args);
int			ft_putvax2(va_list *args);
char		*ft_strdup(const	char *s1);
int			ft_strlen(char *string);
int			arg_ver(char *string, int counter);
int			distro(int counter, char *string, va_list *args);
int			ft_printf(const char	*string, ...);

#endif
