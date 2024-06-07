# Library name
NAME = libft.a

# Compiler and compilation options
CC = gcc
CFLAGS = -Wall -Werror -Wextra

# Sources
SRC = ft_bzero.c\
ft_isalnum.c\
ft_isalpha.c\
ft_isascii.c\
ft_isdigit.c\
ft_isprint.c\
ft_memcpy.c\
ft_memmove.c\
ft_memset.c\
ft_strlen.c\
ft_strlcat.c\
ft_strlcpy.c\
ft_toupper.c\
ft_tolower.c\
ft_strchr.c\
ft_strrchr.c\
ft_strncmp.c\
ft_memchr.c\
ft_memcmp.c\
ft_strnstr.c\
ft_atoi.c\
ft_calloc.c\
ft_strdup.c\
ft_substr.c\
ft_strjoin.c\
ft_strtrim.c\
ft_putchar_fd.c\
ft_putstr_fd.c\
ft_putendl_fd.c\
ft_putnbr_fd.c\
ft_itoa.c\
ft_strmapi.c\
ft_striteri.c\
ft_split.c\

# Objects generated during compilation
OBJS = $(SRC:.c=.o)

# Default rule for compiling the library
all: $(NAME)

# Rule to compile your main project and link it with libft
$(NAME):$(OBJS)

	ar rcs $(NAME) $(OBJS)

# Rule to compile each source file into an object
%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to remove generated objects
clean:
	rm -f $(OBJS)

# Rule to remove the library
fclean: clean
	rm -f $(NAME)

# Rule to rebuild the project from scratch
re: fclean all

.PHONY: clean fclean all re norme