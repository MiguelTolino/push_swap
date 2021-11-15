# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmateo-t <mmateo-t@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/24 16:04:19 by user42            #+#    #+#              #
#    Updated: 2021/11/11 13:57:58 by mmateo-t         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#AUTHOR mmateo-t
#USAGE

#make          #compile all binary
#make clean		#remove all binaries
#make fclean		#remove all binaries and executable

SRCS_DIR:= files/srcs/
SRCS := $(wildcard $(SRCS_DIR)*.c)
OBJS := $(SRCS:%.c=%.o)
NAME:= push_swap
CC:= gcc
CFLAGS:= -Wall -Werror -Wextra
LIBFT_PATH:= files/lib/libft
LIBFT_LIB:= -L$(LIBFT_PATH) $(LIBFT_PATH)/libft.a
RM :=	rm -rvf
DEBUG_FLAG:= -g

all:	libft $(NAME) msg

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME) $(LIBFT_LIB)

$(%.o): $(%.c)
		$(CC) -c $^ -o $@
		@echo "Creating objects"
		
libft:
		make -C $(LIBFT_PATH)

clean:
		@echo "Removing objects"
		$(RM) $(OBJS)
fclean:
		make clean
		cd files/lib/libft && $(MAKE) fclean
		$(RM) $(NAME)
msg:

re:
	make fclean all
	@echo "All files has been deleted and recompiled"

.PHONY: clean fclean all re objects
