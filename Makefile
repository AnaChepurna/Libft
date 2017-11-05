NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC =  *.c
INCL = libft.h
OBJ = *.o

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

$(OBJ): 
	$(CC) -c $(CFLAGS) -I. $(INCL) $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
