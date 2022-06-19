NAME = a.out

SRCS = main.cpp Base.cpp A.cpp B.cpp C.cpp

OBJS = $(SRCS:.cpp=.o)

FLAGS = -Wall -Wextra -Werror

$(NAME):
	c++ $(FLAGS) -std=c++98 $(SRCS) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all