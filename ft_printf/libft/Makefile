# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jehelee <jehelee@student.42.kr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/26 15:18:18 by jehelee           #+#    #+#              #
#    Updated: 2022/11/27 20:49:53 by jehelee          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

CC		= cc
CFLAG	= -Wall -Wextra -Werror

RM		= rm -f
AR		= ar
ARFLAGS = crs

SRCS	= ft_strlen.c		\
		  ft_strlcpy.c		\
		  ft_strlcat.c		\
		  ft_strchr.c		\
		  ft_strnstr.c		\
		  ft_strncmp.c		\
		  ft_strdup.c		\
		  ft_strrchr.c		\
		  ft_memset.c		\
		  ft_memcpy.c		\
		  ft_memmove.c		\
		  ft_memchr.c		\
		  ft_memcmp.c		\
		  ft_bzero.c		\
		  ft_atoi.c			\
		  ft_calloc.c		\
		  ft_isalnum.c		\
		  ft_isalpha.c		\
		  ft_isascii.c		\
		  ft_isdigit.c		\
		  ft_isprint.c		\
		  ft_strdup.c		\
		  ft_tolower.c		\
		  ft_toupper.c		\
		  ft_substr.c		\
		  ft_strjoin.c		\
		  ft_strtrim.c		\
		  ft_split.c		\
		  ft_itoa.c		\
		  ft_strmapi.c		\
		  ft_striteri.c		\
		  ft_putchar_fd.c	\
		  ft_putstr_fd.c	\
		  ft_putendl_fd.c	\
		  ft_putnbr_fd.c	\

SRCS_BN = ft_lstnew.c		\
		  ft_lstsize.c		\
		  ft_lstadd_front.c	\
		  ft_lstlast.c		\
		  ft_lstadd_back.c	\
		  ft_lstdelone.c	\
		  ft_lstclear.c	\
		  ft_lstiter.c		\
		  ft_lstmap.c		\

OBJS	= $(SRCS:.c=.o)

OBJS_BONUS = $(SRCS_BN:.c=.o)

ifdef WITH_BONUS
	OBJ = ${OBJS} ${OBJS_BONUS}
else
	OBJ = ${OBJS}
endif 

all : $(NAME)

%.o : %.c
	$(CC) $(CFLAG) -c $< -o $@

clean :
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

$(NAME) : $(OBJ)
	$(AR) $(ARFLAGS) $@ $^

bonus :
	make WITH_BONUS=1 all

 .PHONY : all clean fclean re bonus