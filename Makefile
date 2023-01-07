CC = cc
AR = ar cr
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror
SRC =  	ft_printf.c      	ft_putchar.c \
		ft_print_digit.c 	ft_print_unsigned.c \
		ft_print_hexa.c 	ft_print_string.c \
	  	ft_print_adres.c	
OBJ = $(SRC:.c=.o)
NAME = libftprintf.a

all : $(NAME)

$(NAME) : $(OBJ)
	$(AR) $(NAME) $(OBJ)
%.o : %.c ft_printf.h
	$(CC) $(CFLAGS)  -c $< -o $@
clean :
	$(RM) $(OBJ)
fclean : clean
	$(RM) $(NAME)
	
re : fclean all
.PHONY : all fclean clean re
