##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## hashcode
##


SRC = 	$(wildcard *.c)

NAME = hashcode

OBJ = $(SRC:.c=.o)

FLAGS = -W -Wall -Wextra

RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
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
