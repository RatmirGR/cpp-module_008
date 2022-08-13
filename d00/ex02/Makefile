NAME =  account

SRCS =  Account.cpp tests.cpp

OBJS = $(SRCS:.cpp=.o)

$(NAME):
	c++ -std=c++98 -Wall -Wextra -Werror $(SRCS) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all