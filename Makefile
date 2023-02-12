CC = cc
CFLAGS = -Wall -Werror -Wextra
NAME = philo
SRC = src/main.c src/utils.c
OBJ = $(SRC:.c=.o)
ARG = 5 80 80 80

all: $(NAME)
$(NAME): $(OBJ)
	$(CC) $(OBJ) -o philo 
run:
	./philo $(ARG)
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f ./$(NAME)