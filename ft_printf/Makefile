# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rferrero <rferrero@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/21 20:49:16 by rferrero          #+#    #+#              #
#    Updated: 2022/04/24 09:54:01 by rferrero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		    	=	libftprintf.a

PATH_LIBFT	    	=	./libft
LIBFT		    	=	$(PATH_LIBFT)/libft.a

I_LIBFT		    	=	-I ./libft
I_PRINTF	    	=	-I ./

CC			    	=	gcc
CFLAGS		    	=	-Wall -Werror -Wextra

AR			    	=	ar
ARFLAGS				=	rcs

RM					=	rm -rf

UTILS_DIR	    	=	utils
UTILS_FILES			=	ft_char.c ft_hexadecimal.c ft_int.c
UTILS_FILES			+=	ft_pointer.c ft_string.c ft_unsigned_int.c

UTILS_SRC	    	=	$(addprefix $(UTILS_DIR)/, $(UTILS_FILES))
UTILS_OBJ	    	=	$(UTILS_SRC:$(UTILS_DIR)/%.c=$(UTILS_DIR)/%.o)

SRC			    	=	ft_printf.c
OBJ			    	=	$(SRC:.c=.o)

all:				$(NAME)

$(NAME):			$(LIBFT) $(UTILS_OBJ) $(OBJ)
					cp $(LIBFT) $(NAME)
					$(AR) $(ARFLAGS) $(NAME) $(UTILS_OBJ) $(OBJ)

$(UTILS_DIR)/%.o:	$(UTILS_DIR)/%.c
					$(CC) $(CFLAGS) -c $< -o $@ $(I_PRINTF) $(I_LIBFT)

$(OBJ): 			$(SRC)
					$(CC) $(CFLAGS) -c $< -o $@ $(I_PRINTF) $(I_LIBFT)

$(LIBFT):
					make -C $(PATH_LIBFT)

clean:
					$(RM) $(UTILS_OBJ)
					$(RM) $(OBJ)
					make -C $(PATH_LIBFT) clean

fclean: 			clean
					$(RM) $(NAME)
					make -C $(PATH_LIBFT) fclean

re: 				fclean all

.PHONY: 			all clean fclean re