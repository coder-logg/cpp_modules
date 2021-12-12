NAME	=	account
SRCS	=	Account.cpp tests.cpp
OBJS		=	$(SRCS:.cpp=.o)
FLAGS		=	-Wall -Wextra -Werror -std=c++98
CC			=	c++

%.o: %.cpp
	$(CC) $(FLAGS) -c $(<F) -I Account.hpp

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean re
