# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/27 16:33:38 by ayarmaya          #+#    #+#              #
#    Updated: 2023/10/28 23:55:18 by ayarmaya         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libft.a

SRC =	ft_bzero.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memcpy.c	\
		ft_memmove.c \
		ft_strlen.c \
		ft_memset.c \
		ft_strlcpy.c \

OBJS =		$(SRC:.c=.o)

CC = 		gcc

CFLAGS =	-Wall -Wextra -Werror

RM = 		rm -f

AR = 		ar crs

all:		$(NAME)
	$(AR) $@ $^

$(NAME): 	$(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:		clean
	$(RM) $(NAME)

re:
	fclean $(NAME)

.PHONY:	all clean fclean re