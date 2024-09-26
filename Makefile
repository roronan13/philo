NAME	=	philo

SRCS	=	philo.c

OBJS	=	$(SRCS:.c=.o)

CC		=	CC

CFLAGS	=	-Wall -Wextra -Werror -g3

RM		=	rm -rf

INCLUDE	=	-I ./

%.o : %.c
		$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDE)

all		:	$(NAME)

$(NAME) :	$(OBJS)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean	:	
			$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean
			make

.PHONY	:	all clean fclean re
