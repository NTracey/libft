# libft.a is the binary name
NAME = libft.a

# list of source files
SRC = ft_isalpha.c \
	  ft_isdigit.c \
	  ft_isalnum.c \
	  ft_isascii.c \
	  ft_isprint.c \
	  ft_strlen.c \
	  ft_memset.c \
	  ft_bzero.c \
	 # ft_memcpy.c \
	  ft_memccpy.c \
	  ft_memmove.c \
	  ft_strlcpy.c \
	  ft_strlcat.c \
	  ft_toupper.c \
	  ft_tolower.c \
	  ft_strchr.c \
	  ft_strrchr.c \
	  ft_strncmp.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_strnstr.c \
	  ft_atoi.c \
	  ft_calloc.c \
	  ft_strdup.c \
	  ft_substr.c \
	  ft_strjoin.c \
	  ft_strtrim.c \
	  ft_split.c \
	  ft_itoa.c \
	  ft_strmapi.c \
	  ft_striteri.c \
	  ft_putchar_fd.c \
	  ft_putstr_fd.c \
	  ft_putendl_fd.c \
	  ft_putnbr_fd.c \
			
		
# Takes all the .c files in $(SRC) and compiles them into .o files
OBJ = $(SRC:.c=.o)

# CFLAGS: Extra flags to give to the C compiler (passes to gcc)
# Flag for implicit rules. Turn on debug info
CFLAGS = -Wall -Wextra -Werror

# CC: Program for compiling C programs; default cc
# Flag for implicit rules
CC = gcc

# specify how to compile the .c files into .o files
%.o : %.c
	$(CC) $(CFLAGS)	-c $< -o $@

# mandatory to create a $(NAME) rule to execute other rules and render a binary.
$(NAME): $(OBJ)
#	$(CC) $(CFLAGS) -c $(SRCS) -I./
	ar rcs $(NAME) $(OBJ)

# all the targets (multiple targets) to run
all: $(NAME)

# clean will remove .o files
# clean is used as a target to remove outputs of other targets.
# clean target will only run if you call make clean
clean:
	rm -f $(OBJ)

# fclean will remove .o files and the binary
fclean: clean
	rm -f $(NAME)

# re will do fclean and remake your binary
re: fclean all

# .phony helps to avoid relinking
.PHONY: all clean fclean re
