##
## EPITECH PROJECT, 2019
## NWP_MyChap
## File description:
## Makefile
##

NAME		=   client

SRCS		=	network.c		\
			my_adres.c		\
			main.c

OBJS		=	$(SRCS:.c=.o)

CFLAGS		=	-fPIC

all: $(NAME)

$(NAME): $(OBJS)
	gcc -o $(NAME) $(OBJS)
	rm -f *.o

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
