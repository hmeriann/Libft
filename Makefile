# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmeriann <hmeriann@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/22 17:14:40 by hmeriann          #+#    #+#              #
#    Updated: 2021/04/22 17:52:13 by hmeriann         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

LIST =		ft_atoi.c		ft_bzero.c		ft_isalnum.c\
			ft_isalpha.c	ft_isascii.c	ft_isdigit.c\
			ft_isprint.c	ft_memcpy.c		ft_memset.c\
			ft_putchar_fd.c	ft_putstr_fd.c	ft_strcmp.c\
			ft_strlen.c		ft_tolower.c	ft_toupper.c\

OBJ =		$(patsubst %.c,%.o,$(LIST))

D_FILES =	$(patsubst %.c,%.d,$(LIST))

OPTFLAGS =	-O2
FLAGS =		-Wall -Wextra -Werror

all:		$(NAME)

$(NAME):	$(OBJ)
			ar rcs $(NAME) $?

%.o:		%.c
			gcc $(FLAGS) $(OPTFLAGS) -c $< -o $@ -MD

include $(wildcard $(D_FILES))

clean:
			@rm -f $(OBJ) $(D_FILES)

fclean:		clean
			@rm -f $(NAME)

re:			fclean all

PHONY:		all clean fclean re
