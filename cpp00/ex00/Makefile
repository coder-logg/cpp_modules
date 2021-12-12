NAME	=	megaphone
SRCS	=	main.cpp
OBJS		=	$(SRCS:.cpp=.o)
FLAGS		=	-Wall -Wextra -Werror -std=c++98
CC			=	c++

%.o: %.cpp
	c++ $(FLAGS) -c $(<F)

all: $(NAME)

$(NAME): $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean re
