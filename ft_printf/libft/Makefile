# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rferrero <rferrero@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/18 11:55:51 by rferrero          #+#    #+#              #
#    Updated: 2022/06/22 16:41:22 by rferrero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

CC		=	gcc

AR		=	ar

CFLAGS	=	-Wall -Wextra -Werror

ARFLAGS	=	rcs

RM		=	rm -f

SOURCES			=	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c
SOURCES			+=	ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c
SOURCES			+=	ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c
SOURCES			+=	ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c
SOURCES			+=	ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c
SOURCES			+=	ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c
SOURCES			+=	ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c
SOURCES			+=	ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c
SOURCES			+=	ft_tolower.c ft_toupper.c get_next_line.c ft_strjoin_free.c
SOURCES			+=	ft_substr_free.c

OBJECTS			= 	$(SOURCES:.c=.o)

.c.o:
				$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all:			$(NAME)

$(NAME):		$(OBJECTS)
				$(AR) $(ARFLAGS) $(NAME) $(OBJECTS)

clean:
				$(RM) $(OBJECTS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re
