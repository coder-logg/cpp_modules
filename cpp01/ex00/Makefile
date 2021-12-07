NAME	=	exec
SRCS	=	Zombie.cpp main.cpp newZombie.cpp randomChump.cpp
OBJS		=	$(SRCS:.cpp=.o)
FLAGS		=	-Wall -Wextra -Werror
CC			=	c++

%.o: %.cpp
	$(CC) $(FLAGS) -c $(<F) -I Zombie.hpp

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean re
