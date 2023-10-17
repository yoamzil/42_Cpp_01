CC			=	c++
CXXFLAGS	=	-Wall -Werror -Wextra -std=c++98
NAME		=	brain
SRCS		=	main.cpp
OBJS		=	$(SRCS:.cpp=.o)

%.o			:	%.cpp
				$(CC) $(CXXFLAGS) -c $< -o $@

all			:	$(NAME)

$(NAME)		:	$(OBJS)
				$(CC) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean		:
				rm -f $(OBJS)

fclean		:	clean
				rm -f $(NAME)

re			:	fclean all

.PHONY		:	clean fclean all re