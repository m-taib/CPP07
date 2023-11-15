# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtaib <mtaib@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/18 18:16:15 by mtaib             #+#    #+#              #
#    Updated: 2023/11/14 18:46:54 by mtaib            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp 
OSRC = $(SRC:.cpp=.o)

NAME = Iter
CFLAGS = -Wextra -Werror -Wall -std=c++98

%.o:%.cpp iter.hpp 
	c++ -c $(CFLAGS)  $<

all: $(NAME)

$(NAME) :$(OSRC)
		c++ $(CFLAGS) $^ -o $(NAME)

clean :
	@rm -f *.o
fclean :
	@rm -f *.o $(NAME) 
re : fclean all

.PHONY : all clean fclean re
