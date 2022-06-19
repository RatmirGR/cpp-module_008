NAME = phonebook

SRCS = Main.cpp Phonebook.cpp Contact.cpp

OBJS = $(SRCS:.cpp=.o)

$(NAME):
	c++ -std=c++98 -Wall -Wextra -Werror $(SRCS) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all