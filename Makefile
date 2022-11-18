# Run with command ```make```

CC= gcc
SRC= $(wildcard *.c) tests/binary_tree_print.c
FLAGS= -Wall -Wextra -Werror -pedantic -std=c89
all: $(SRC)
	$(CC) $(FLAGS) $(SRC) -o main