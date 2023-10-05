INCLUDES := ./includes
SRCS := ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memset.c ft_strlen.c ft_bzero.c ft_tolower.c ft_toupper.c ft_memmove.c ft_strlcpy.c \
ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_strlcat.c ft_strrchr.c ft_strchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_memcpy.c ft_atoi.c \
ft_strdup.c ft_substr.c ft_strjoin.c ft_putnbr_fd.c ft_calloc.c ft_striteri.c ft_strmapi.c ft_itoa.c ft_strtrim.c ft_split.c
OBJECTS := $(SRCS:.c=.o)
FLAGS := -Wall -Wextra -Werror
NAME := libft.a
CC := cc

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

%.o: %.c
	$(CC) $(FLAGS) -I$(INCLUDES) -c $< -o $@

re: fclean all

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)