NAME=ft_printf
CC=gcc
CFLAGS+=-Wall -Wextra -Werror
LIB=-L ./libft -lft
SRC=./sources/csp_specifier.c \
	./sources/dioux_specifier.c \
	./sources/diu_arg_detect.c \
	./sources/f_specifier.c \
	./sources/ft_ftoa.c \
	./sources/ft_printf.c \
	./sources/ft_strndup.c \
	./sources/ft_unitoa.c \
	./sources/moinsspluss.c \
	./sources/ol.c \
	./sources/ox_arg_detect.c \
	./sources/signs.c \
	./sources/silly_detect.c \
	./sources/silly_detect_2.c \
	./sources/struct_tools.c \
	./sources/tools.c \
	./sources/widthower.c
OBJ=$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	(cd ./libft && make)
	$(CC) $(CFLAGS) -o $(NAME) main.c $(OBJ) $(LIB)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	(cd ./libft && make clean)
	rm -rf $(OBJ)

fclean: clean
	(cd ./libft && make fclean)
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re relib reall
