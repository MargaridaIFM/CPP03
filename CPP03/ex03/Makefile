NAME = DiamondTrap

CC = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror -g

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Creating  DiamondTrap Progam..."
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "Removing object files.."
	@rm -f $(OBJ)

fclean: clean
	@echo "Removing Program.."
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re