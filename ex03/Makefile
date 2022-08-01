NAME		=	a.out
CXX			=	clang++ $(CXXFLAGS) -std=c++98
42FLAGS		=	-Wall -Werror -Wextra
CXXFLAGS 	=	$(42FLAGS) $(LDFLAGS)
LDFLAGS		=	-fsanitize=address -g3
SRCS		=	main.cpp Character.cpp Ice.cpp Cure.cpp MateriaSource.cpp AMateria.cpp
OBJS		=	$(SRCS:.cpp=.o)

$(NAME):		$(OBJS)
				$(CXX) $(SRCS) -o $(NAME)

all:			$(NAME)

re:				fclean all

clean:			
				rm -f *.o

fclean:			clean
				rm -fr .vscode
				rm -f $(NAME)

.phony:			all re clean fclean
				
