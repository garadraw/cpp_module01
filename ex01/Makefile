NAME = moar_brainz

CC = c++

FLAGS = -Werror -Wall -Wextra -std=c++98 -g

SRC = Zombie.Class.cpp zombieHorde.cpp main.cpp

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