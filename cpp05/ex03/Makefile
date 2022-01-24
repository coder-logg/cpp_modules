NAME	=	./bureaucrat
SRCS	=	main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp \
			RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp
OBJS	=	$(SRCS:.cpp=.o)
FLAGS	=	-Wall -Wextra -Werror -std=c++98
CC		=	c++

%.o: %.cpp
	$(CC) $(FLAGS) -c $(<F)

%.cpp:%.hpp
	@touch $@

all: $(NAME)

$(NAME): $(OBJS) $(SRCS)
	$(CC) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

debug:
	c++ -g ./*.cpp -o $(NAME)

re: fclean all

.PHONY:	all clean fclean re
