NAME = replace

CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp replace.cpp
OBJ = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)
	rm -rf test.replace

re: fclean all

test:
	./replace test
	./replace test "" ""
	./replace test you TEST1234

.PHONY: all clean fclean re test
