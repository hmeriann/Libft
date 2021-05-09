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
			ft_min.c		ft_strlcpy.c	ft_strdup.c\
			ft_substr.c		ft_strjoin.c\
			ft_strrchr.c	ft_strnstr.c	ft_strncmp.c\
			ft_calloc.c		ft_memccpy.c	ft_memchr.c\
			ft_memcmp.c		ft_memmove.c	ft_putendl_fd.c\
			ft_putnbr_fd.c	ft_strchr.c		ft_strtrim.c\
			ft_split.c		ft_itoa.c\
			
LIST_B =	ft_lstnew.c		ft_lstlast.c\

OBJ =		$(patsubst %.c,%.o,$(LIST))
OBJ_B =		$(patsubst %.c,%.o,$(LIST_B))

D_FILES =	$(patsubst %.c,%.d,$(LIST) $(LIST_B))

OPTFLAGS =	-O2
FLAGS =		-Wall -Wextra -Werror

all:		$(NAME)

$(NAME):	$(OBJ)
			ar rcs $(NAME) $?

%.o:		%.c
			gcc $(FLAGS) $(OPTFLAGS) -c $< -o $@ -MD

include $(wildcard $(D_FILES))

bonus:		${OBJ_B}
			ar rcs $(NAME) $?

clean:
			@rm -f $(OBJ) $(OBJ_B) $(D_FILES)

fclean:		clean
			@rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re bonus
