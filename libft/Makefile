# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: celadia <celadia@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/15 17:23:13 by celadia           #+#    #+#              #
#    Updated: 2022/08/15 17:34:33 by celadia          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

CC		= clang
CFLAGS	= -Wall -Wextra -Werror
HEADER	= libft.h	get_next_line.h

SRCS =	ft_assign_ptr.c	ft_isdigit.c	ft_lstadd_front.c	\
		ft_lstnew.c		ft_lstpop.c		ft_memchr.c			\
		ft_memcmp.c		ft_memcpy.c		ft_memset.c			\
		ft_minmax.c		ft_putendl_fd.c	ft_strchr.c			\
		ft_strlen.c		ft_substr.c		get_next_line.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(OBJS): $(HEADER)

$(NAME): $(OBJS)
	$(AR) rcs $(NAME) $?

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all


.PHONY: all clean fclean re norm
