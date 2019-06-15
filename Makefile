NAME = libft.a

CC = gcc

FLAGS = -Wall -Wextra -Werror

SRC = ft_isdigit.c\
ft_memmove.c\
ft_strlcat.c\
ft_strrchr.c\
ft_isprint.c\
ft_memset.c\
ft_strlen.c\
ft_strstr.c\
ft_atoi.c\
ft_strcat.c\
ft_strncat.c\
ft_tolower.c\
ft_bzero.c\
ft_memccpy.c\
ft_strchr.c\
ft_strncmp.c\
ft_toupper.c\
ft_isalnum.c\
ft_memchr.c\
ft_strcmp.c\
ft_strncpy.c\
ft_isalpha.c\
ft_memcmp.c\
ft_strcpy.c\
ft_isascii.c\
ft_memcpy.c\
ft_strdup.c\
ft_strnstr.c\
ft_memalloc.c\
ft_strnew.c

OBJ = $(SRC:%.c=%.o)

all: build_lib

build_lib: create_obj
	ar -rc $(NAME) $(OBJ) libft.h
	ranlib $(NAME)

create_obj:
	$(CC) $(FLAGS) -c $(SRC)

norm:
	norminette -R CheckForbiddenSourceHeader $(SRC) libft.h

clean: 
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)
	rm -rf a.out

run:
	$(CC) $(FLAGS) $(NAME) main.c ./a.out

re: fclean all

