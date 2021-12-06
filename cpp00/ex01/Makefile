NAME	=	phonebook
SRCS	=	Phonebook.cpp Contact.cpp main.cpp
OBJS		=	$(SRCS:.cpp=.o)
FLAGS		=	-Wall -Wextra -Werror
CC			=	c++

%.o: %.cpp
	c++ $(FLAGS) -c $(<F)

all: $(NAME)

$(NAME): $(OBJS)
	c++ -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean re
