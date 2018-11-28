# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: christian <marvin@42.fr>                   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/27 19:17:07 by christian         #+#    #+#              #
#    Updated: 2018/11/27 19:50:34 by christian        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_strcat.c ft_strcpy.c ft_strdup.c ft_strlen.c ft_strncat.c \
	   ft_strncpy.c

INCLUDES = includes

OBJECTS = $(SRCS:.c=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

$(OBJECTS): $(addprefix srcs/, $(SRCS))
	gcc -Wall -Wextra -Werror -I./$(INCLUDES) -c $(addprefix srcs/, $(SRCS))

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
