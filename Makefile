# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmendes <kmendes@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/01 15:50:35 by kmendes           #+#    #+#              #
#    Updated: 2021/11/01 15:50:36 by kmendes          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a

CFLAGS := -Wall -Werror -Wextra
ARFLAGS := rcs

INC := ./libft

SRC_DIR := ./src
SRC := io/ft_putchar_fd.c \
io/ft_putendl_fd.c \
io/ft_putnbr_fd.c \
io/ft_putstr_fd.c \
lst/ft_lstadd_back.c \
lst/ft_lstadd_front.c \
lst/ft_lstclear.c \
lst/ft_lstdelone.c \
lst/ft_lstiter.c \
lst/ft_lstlast.c \
lst/ft_lstmap.c \
lst/ft_lstnew.c \
lst/ft_lstsize.c \
mem/ft_bzero.c \
mem/ft_calloc.c \
mem/ft_memchr.c \
mem/ft_memcmp.c \
mem/ft_memcpy.c \
mem/ft_memmove.c \
mem/ft_memset.c \
string/ft_atoi.c \
string/ft_isalnum.c \
string/ft_isalpha.c \
string/ft_isascii.c \
string/ft_isdigit.c \
string/ft_islower.c \
string/ft_isprint.c \
string/ft_isspace.c \
string/ft_isupper.c \
string/ft_itoa.c \
string/ft_split.c \
string/ft_strchr.c \
string/ft_strcmp.c \
string/ft_strdup.c \
string/ft_striteri.c \
string/ft_strjoin.c \
string/ft_strlcat.c \
string/ft_strlcpy.c \
string/ft_strlen.c \
string/ft_strmapi.c \
string/ft_strncmp.c \
string/ft_strnstr.c \
string/ft_strrchr.c \
string/ft_strstr.c \
string/ft_strtrim.c \
string/ft_substr.c \
string/ft_tolower.c \
string/ft_toupper.c

OBJ_DIR := ./obj
OBJS := ${addprefix $(OBJ_DIR)/, ${SRC:.c=.o}} #obj/.../.o

all : $(NAME)

$(NAME) : $(OBJS)
	ar $(ARFLAGS) $@ $^

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	mkdir -p $(@D)
	gcc $(CFLAGS) -o $@ -c $< -I$(INC)

clean :
	${RM} $(OBJS)

fclean : clean
	${RM} $(NAME)

re : fclean all

.PHONY : all clean fclean re