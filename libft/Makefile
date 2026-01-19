
NAME =libft.a #nombre del archivo que vas a generar 

CC  = cc #compilador que va a usar
CFLAGS = -Wall -Wextra -Werror -I. -fsanitize=address -g3 #diferentes reglas de compilacion

HEADER = libft.h #para que tenga eb cuenta el .h ademas de los .c

SRC = ft_isalpha.c\ #aqui incluimos todos los .c
      ft_isdigit.c\

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ) #ar es para crear el .a con las reglas r,c y s
	
%.o:%.c $(HEADER) #para tener en cuenta los cambios en el .h
	$(CC) $(CFLAGS) -c $< -o $@	

clean:
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re


