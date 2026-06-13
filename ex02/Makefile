.PHONY : all clean fclean re
.SILENT :

NAME    = fixed
CXX     = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRC     = main.cpp Fixed.cpp
OBJ     = $(SRC:.cpp=.o)
RM      = rm -f

# Couleurs
NC	= \033[0m
GREEN	= \033[1;32m
RED	= \033[1;31m

all:    $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	@printf "$(GREEN)COMPILATION REUSSIE$(NC)\n"

clean:
	$(RM) $(OBJ)
	@printf "$(RED)SUPPRESSION DES .O$(NC)\n"

fclean: clean
	$(RM) $(NAME)
	@printf "$(RED)SUPPRESSION DU BINAIRE$(NC)\n"

re: fclean all
