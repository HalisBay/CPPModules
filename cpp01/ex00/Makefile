NAME = zombie
CC = g++
CFLAGS = -std=c++98 -Wall -Wextra -Werror
SRCS = Zombie.cpp main.cpp randomChump.cpp newZombie.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
