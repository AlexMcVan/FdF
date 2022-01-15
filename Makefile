# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amarie-c <amarie-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/15 13:38:53 by amarie-c          #+#    #+#              #
#    Updated: 2022/01/15 15:57:34 by amarie-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= 		fdf
LIBFT_A =		libft.a

#COMP 	=		gcc -Wall -Wextra -Werror main.c -I includes -I libft/includes -I libft/libft -I /usr/local/include  -L /usr/local/lib -lmlx -framework OpenGL -framework AppK
#CFLAGS	= 		-Wall -Wextra -Werror
#CC		= 		gcc
#COMP_LIBFT =	-I includes -I libft/includes -I libft/libft 
OBJ_DIR =		obj/
SRC_DIR =		srcs/
LIBFT	=		libft/

SRC		=		main.c

HEADER	=		headers/fdf.h

OBJ		=		$(SRC:%.c=%.o)

SRC_PATH =   	$(SRC:%=$(S_SRC_DIR)%)
OBJ_PATH =	$(addprefix $(OBJ_DIR), $(OBJ))

all:			do_libft $(OBJ_DIR) $(NAME)

$(OBJ_DIR):
				@mkdir -p $(OBJ_DIR)
				@echo Create: Object directory

$(NAME):		$(OBJ_PATH)
				@gcc $(OBJ_PATH) *.a -o fdf \
					-I includes -I libft/includes
				@gcc $(S_OBJ_PATH) $(C_OBJ_PATH) *.a -o checker \
					-I includes -I libft/includes

$(OBJ_PATH):	$(SRC_PATH)
				@$(MAKE) $(OBJ)					
					
$(OBJ):		$(LIBFT_A)
				@echo Create: $(@:obj/%=%)"\x1b[1A\x1b[M"
				@$(COMP) $(OBJ_DIR)$@ $(SRC_DIR)$(@:%.o=%.c)		

do_libft:
				@make -C $(LIBFT)
				@cp $(LIBFT)/$(LIBFT_A) .

clean:
				@/bin/rm -rf $(OBJ_DIR)
				@echo "\n objects cleaned \n"

fclean:			clean
				@/bin/rm -f $(NAME) $(LIBFT_A)
				@make -C $(LIBFT) fclean
				@echo "\n\ all cleaned\n"

re: 			fclean all

.PHONY:			all clean fclean