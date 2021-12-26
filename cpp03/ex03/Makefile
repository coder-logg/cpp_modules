NAME	=	./serena
SRCS	=	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
OBJS		=	$(SRCS:.cpp=.o)
FLAGS		=	-Wshadow -Wno-shadow -Wall -Wextra -Werror -std=c++98
CC			=	clang++

%.o: %.cpp
	$(CC) $(FLAGS) -c $(<F)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean re
