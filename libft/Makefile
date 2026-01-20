
NAME = libft.a #nombre del archivo que vas a generar 

CC  = cc #compilador que va a usar
CFLAGS = -Wall -Wextra -Werror #diferentes reglas de compilacion

HEADER = libft.h #para que tenga eb cuenta el .h ademas de los .c

SRC = ft_isalpha.c \
	 ft_isdigit.c \
	  ft_isalnum.c \
	   ft_isascii.c \
	    ft_isprint.c \
	     ft_strlen.c \
	      *ft_memset.c \

OBJ = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ) #ar es para crear el .a con las reglas r,c y s
	
%.o:%.c $(HEADER) #para tener en cuenta los cambios en el .h
	$(CC) $(CFLAGS) -o $@ -c $<	

clean:
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re


