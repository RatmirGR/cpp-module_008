NAME = a.out

SRCS = main.cpp Fixed.cpp

OBJS = $(SRCS:.cpp=.o)

#FLAGS = -Wall -Wextra -Werror

$(NAME):
	c++ -std=c++98 $(SRCS) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all