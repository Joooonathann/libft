CC=gcc
CFLAGS=-Wall -Werror -Wextra
NAME=libft.a

SRC_DIR = .

FILES = $(wildcard $(SRC_DIR)/*.c)
 
OBJECTS = $(FILES:.c=.o)
 
all: $(NAME)
 
$(NAME): $(OBJECTS)
	$(AR) rcs $@ $^
 
clean:
	rm -rf *.o
 
fclean: clean
	rm -rf $(NAME)
 
re: fclean all
 
.PHONY: clean fclean
