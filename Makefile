# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frcarval <frcarval@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/03 06:20:03 by frcarval          #+#    #+#              #
#    Updated: 2021/12/10 17:43:51 by frcarval         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES	=	ft_printf.c				\
			ft_printf_sidefunc.c	\
			utils/ft_baser.c		\
			utils/ft_nbrlen.c		\
			utils/ft_putnbr.c		\
			utils/ft_putvachr.c		\
			utils/ft_putvanrd.c		\
			utils/ft_putvanri.c		\
			utils/ft_putvanru.c		\
			utils/ft_putvapntr.c	\
			utils/ft_putvastr.c		\
			utils/ft_putvax1.c		\
			utils/ft_putvax2.c		\
			utils/ft_strdup.c		\
			utils/ft_strlen.c
			
NAME 	=	libftprintf.a
OBJECTS	=	$(SOURCES:.c=.o)
GCCW	=	gcc	-Wall -Wextra -Werror

.c.o:
	$(GCCW) -c $< -o $(<:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJECTS)
			ar rcs $(NAME) $(OBJECTS)

clean:		
			rm -f $(OBJECTS)

fclean:		clean
			rm -f $(NAME)

re:			fclean $(NAME)

.PHONY:	all clean fclean re
