.PHONY : all clean fclean re
.SILENT :

NAME    = fixed
CXX     = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRC     = main.cpp Fixed.cpp
OBJ     = $(SRC:.cpp=.o)
RM      = rm -f

all:    $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	@printf "\033[1;32mCOMPILATION REUSSIE\033[0m\n"

clean:
	$(RM) $(OBJ)
	@printf "\033[1;31mSUPPRESSION DES .O\033[0m\n"

fclean: clean
	$(RM) $(NAME)
	@printf  "\033[1;31mSUPPRESSION DU BINAIRE\033[0m\n"

re: fclean all