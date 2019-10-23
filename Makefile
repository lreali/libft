# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ereali <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/09 18:07:18 by ereali            #+#    #+#              #
#    Updated: 2019/10/23 17:36:01 by ereali           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c \
	ft_memcmp.c ft_strlen.c ft_isalpha.c ft_atoi.c ft_isdigit.c ft_isalnum.c \
  	ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c \
    ft_strdup.c ft_calloc.c ft_substr.c ft_strjoin.c ft_strtrim.c \
	ft_split.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c ft_itoa.c
	
BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstadd_back_bonus.c \
		ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstdelone_bonus.c \
		ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

CC = gcc

FLAG = -Wextra -Werror -Wall

OBJSBONUS = $(BONUS:.c=.o)

OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	gcc $(FLAG) -c $(SRC)
	ar -rc $(NAME) $(OBJS)
	ranlib $(NAME)

bonus: fclean
	gcc $(FLAG) -c $(BONUS) $(SRC)
	ar -rc $(NAME) $(OBJS) $(OBJSBONUS)
	ranlib $(NAME)

clean:
	rm -rf $(OBJS) $(OBJSBONUS)
fclean: clean
	rm -rf $(NAME)

re: fclean all
