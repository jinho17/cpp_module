NAME = array

CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp
OBJ = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
