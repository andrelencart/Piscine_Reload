# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/23 14:03:06 by andcarva          #+#    #+#              #
#    Updated: 2024/10/23 15:41:25 by andcarva         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
FLAGS=-Wall -Wextra -Werror
CC=cc
SRC_DIR=srcs
INCLUDE_DIR=includes
OBJ_DIR=obj
SRC= ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
SRCS= $(addprefix $(SRC_DIR)/, $(SRC))
OBJ= $(addprefix $(OBJ_DIR)/, $(SRC:%.c=%.o))

# teste:
# 	echo $(OBJ)

all: $(NAME)
	
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	${CC} ${FLAGS} -I $(INCLUDE_DIR) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all