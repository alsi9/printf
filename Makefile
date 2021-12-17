# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ephantom <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/01 17:43:42 by ephantom          #+#    #+#              #
#    Updated: 2021/11/01 17:44:00 by ephantom         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

SRCS	=	ft_printf.c		ft_put_char.c	ft_put_str.c	ft_put_d_i.c\
			ft_put_p.c		ft_put_u.c		ft_put_x.c\

HEADER	=	ft_printf.h

OBJS	=	${SRCS:%.c=%.o}

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror -I${HEADER}

RM		=	 rm -f

.PHONY:		all clean fclean re

all:		${NAME}

${NAME}:	${OBJS} ${HEADER}
			ar rcs ${NAME} $? 

%.o: 		%.c ${HEADER}
			${CC} ${CFLAGS} -c $< -o $@

clean:		
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all
