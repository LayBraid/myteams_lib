
CC = gcc

SRC = src/client.c \
	  src/server.c \

INCLUDE = -Iinclude

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra

NAME = libmyteams

all: $(OBJ)
	$(CC) -shared -o $(NAME).so $(OBJ) $(CFLAGS) $(INCLUDE)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME).so

re: fclean all
