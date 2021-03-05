NAME = convert

CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Convert.cpp
OBJ = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

test:			$(NAME)
				./convert 0
				./convert nan
				./convert 42.0f
				./convert 42
				./convert 42.
				./convert 42.f
				./convert nanf
				./convert inf
				./convert inff
				./convert +inf
				./convert +inff
				./convert -inf
				./convert -inff
				./convert 2147483647
				./convert 2147483648
				./convert -2147483648
				./convert -2147483649
				./convert 2147483647.
				./convert 2147483648.
				./convert -2147483648.
				./convert -2147483649.
				./convert a
				./convert B
				./convert "~"
				./convert 126
				./convert test
				./convert 58
				./convert 101
				./convert 457846
				./convert 12544.545f
				./convert 54178652.41784187


.PHONY: all clean fclean re test
