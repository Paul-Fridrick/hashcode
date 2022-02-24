##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## hashcode
##


SRC = 	$(wildcard src/*c)

NAME = hashcode

OBJ = $(SRC:.c=.o)

FLAGS = -W -Wall -Wextra -lm -lncurses -L ./lib/my/ -lmy

RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	cd lib/my && make re
	$(CC) -o $(NAME) $(OBJ) $(FLAGS)
	$(RM) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	$(RM) a.out
	$(RM) *.o
	$(RM) lib/my/libmy.a

re: fclean all
