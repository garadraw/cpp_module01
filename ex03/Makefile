NAME = unnecessary_violence

CC = c++

FLAGS = -Werror -Wall -Wextra -std=c++98 -g

SRC = main.cpp Weapon.Class.cpp HumanA.Class.cpp HumanB.Class.cpp

RM = rm -f

all: $(NAME)

$(NAME):
	@$(CC) $(FLAGS) $(SRC) -o $@

clean:
	@$(RM) $(NAME)

fclean: clean
	$(RM) $(NAME)

re: fclean all $(NAME)

.PHONY: all clean fclean re