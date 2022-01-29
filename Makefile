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

#compilation
NAME = libft.a
CFLAGS = -Wall -Werror -Wextra
ARFLAGS = rcs

#paths
INC_PATH = ./
SRC_PATH = ./
OBJ_PATH = ./

SRCS_NAME = \
ft_atoi.c               ft_isdigit.c                        ft_memmove.c            ft_split.c              ft_strlcat.c            ft_strrchr.c\
ft_bzero.c              ft_islower.c                        ft_memset.c             ft_strchr.c             ft_strlcpy.c            ft_strstr.c\
ft_calloc.c             ft_isprint.c                        ft_putchar_fd.c         ft_strcmp.c             ft_strlen.c             ft_strtrim.c\
ft_isalnum.c            ft_isspace.c                      	ft_memchr.c             ft_putendl_fd.c         ft_strdup.c             ft_strmapi.c            ft_substr.c\
ft_isalpha.c            ft_isupper.c                        ft_memcmp.c             ft_putnbr_fd.c          ft_striteri.c           ft_strncmp.c            ft_tolower.c\
ft_isascii.c            ft_itoa.c                           ft_memcpy.c             ft_putstr_fd.c          ft_strjoin.c            ft_strnstr.c            ft_toupper.c
SRCS = ${addprefix ${SRC_PATH}, ${SRCS_NAME}}
OBJS_NAME = ${SRCS_NAME:.c=.o}
OBJS = ${addprefix ${OBJ_PATH},  ${OBJS_NAME}}

#bonus
SRCS_BONUS_NAME = \
ft_lstadd_back.c        ft_lstclear.c           ft_lstiter.c            ft_lstmap.c             ft_lstsize.c\
ft_lstadd_front.c       ft_lstdelone.c          ft_lstlast.c            ft_lstnew.c
SRCS_BONUS = ${addprefix ${SRC_PATH}, ${SRCS_BONUS_NAME}};
OBJS_BONUS_NAME = ${SRCS_BONUS_NAME:.c=.o}
OBJS_BONUS = ${addprefix ${OBJ_PATH}, ${OBJS_BONUS_NAME}}

all : ${NAME}

bonus : ${OBJS} ${OBJS_BONUS}
	ar ${ARFLAGS} ${NAME} $^

$(NAME) : ${OBJS}
	ar ${ARFLAGS} $@ $^

${OBJ_PATH}%.o : ${SRC_PATH}%.c
	gcc ${CFLAGS} -o $@ -c $< -I${INC_PATH}

clean :
	rm -f ${OBJS} ${OBJS_BONUS}

fclean : clean
	rm -f ${NAME}

re : fclean all

.PHONY : all clean fclean re