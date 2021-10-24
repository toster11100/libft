# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssedgeki <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/11 18:02:00 by ssedgeki          #+#    #+#              #
#    Updated: 2021/10/11 22:38:26 by ssedgeki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRCS	=	ft_isalpha.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isprint.c\
		ft_isdigit.c\
		ft_strlen.c\
		ft_memset.c\
		ft_bzero.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_strlcpy.c\
		ft_strlcat.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_strncmp.c\
		ft_memchr.c\
		ft_memcmp.c

HEADER	=	libft.h

OBJ	=	$(SRCS:%.c=%.o)
CC	=	cc
CFLAGS	=	-Wall -Wextra -Werror -I$(HEADER)

.PHONY	:	all clean fclean re

all	:	$(NAME)

$(NAME)	:	$(OBJ) $(HEADER)
		ar rcs $(NAME) $?

%.o	:	%.c $(HEADER)
		$(CC) $(FLAGS) -c $< -o $@

clean	:
		rm -f $(OBJ)

fclean	:	clean 
		rm -f $(NAME)

re	:	fclean all
