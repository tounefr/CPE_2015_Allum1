##
## Makefile for  in /home/thomas/Documents/epitech/CPE_2015_BSQ
##
## Made by Thomas Henon
## Login   <thomas.henon@epitech.eu>
##
## Started on  Wed Dec  2 18:10:57 2015 Thomas Henon
## Last update Sat Feb 20 10:40:32 2016 Thomas HENON
##

NAME	= allum1

CC	= gcc

RM	= rm -f

SRCS	=	main.c \
				display.c \
				user_input.c \
				ai.c \
				game.c \
				get_next_line.c

OBJS	= $(SRCS:.c=.o)

CFLAGS = -l my -L ./my -I ./my -Wall

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(CFLAGS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re all
