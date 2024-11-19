# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sidrissi <sidrissi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/30 22:01:02 by sidrissi          #+#    #+#              #
#    Updated: 2024/11/15 23:16:01 by sidrissi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
FLAGS = -Wall -Wextra -Werror
AR = ar -rc
RM = rm -f
FILES = ft_atoi.c ft_isalnum.c ft_isdigit.c ft_memchr.c ft_memmove.c ft_putendl_fd.c ft_split.c\
		ft_striteri.c ft_strlcpy.c ft_strncmp.c ft_strtrim.c ft_toupper.c ft_bzero.c ft_isalpha.c\
		ft_isprint.c ft_memcmp.c ft_memset.c ft_putnbr_fd.c ft_strchr.c ft_strjoin.c ft_strlen.c\
		ft_strnstr.c ft_substr.c ft_calloc.c ft_isascii.c ft_itoa.c ft_memcpy.c ft_putchar_fd.c ft_putstr_fd.c\
		ft_strdup.c ft_strlcat.c ft_strmapi.c ft_strrchr.c ft_tolower.c
BFILES = ft_lstadd_back_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstnew_bonus.c ft_lstadd_front_bonus.c\
		ft_lstdelone_bonus.c ft_lstlast_bonus.c ft_lstsize_bonus.c
OBJECTS = $(FILES:.c=.o)
BOBJECTS = $(BFILES:.c=.o)
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJECTS)

%.o: %.c libft.h
	$(CC) $(FLAGS) -c $< -o $@
	$(AR) $(NAME) $@

bonus: $(BOBJECTS)

clean:
	$(RM) $(OBJECTS) $(BOBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all