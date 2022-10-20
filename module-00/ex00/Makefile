# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccamie <ccamie@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 13:45:45 by ccamie            #+#    #+#              #
#    Updated: 2022/10/20 19:35:20 by ccamie           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SHELL		=	/bin/sh

CC			=	c++

CPPFLAGS	=	-Wall -Wextra -Werror
CPPFLAGS	+=	-std=c++98
# CPPFLAGS	+=	-I include
# CPPFLAGS	+=	-g

CXXFLAGS	=	

MKDIR		=	mkdir -p

RMDIR		=	rm -rf
RM			=	rm -f

NAME		=	megaphone.out

_HEADER		=	

_SOURCE	=	megaphone.cpp

SOURCE		=	$(addprefix source/, $(_SOURCE))
OBJECT		=	$(addprefix object/, $(_SOURCE:.cpp=.o))
FOLDER		=	$(sort $(dir object/ $(OBJECT)))
HEADER		=	$(addprefix include/, $(_HEADER))

.SUFFIXES	:
.SUFFIXES	:	.cpp .o

.PHONY		:	all clean fclean re test

%.o			:	%.cpp
				$(CC) $(CPPFLAGS) -c $< -o $@

object/%.o	:	source/%.cpp $(HEADER)
				$(CC) $(CPPFLAGS) -c $< -o $@

all			:	$(FOLDER) $(NAME)

$(FOLDER)	:
				$(MKDIR) $@

$(NAME)		:	$(OBJECT)
				$(CC) $(CXXFLAGS) $(OBJECT) -o $(NAME)

test/test.out:	test/test.o
				$(CC) $(CXXFLAGS) test/test.cpp -o test/test.out

test		:	all test/test.out
				./$(NAME) "shhhhh... I think the students are asleep..." | test/test.out "SHHHHH... I THINK THE STUDENTS ARE ASLEEP..."
				./$(NAME) Damnit " ! " "Sorry students, I thought this thing was off." | test/test.out "DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF."
				./$(NAME) | test/test.out "* LOUD AND UNBEARABLE FEEDBACK NOISE *"

clean		:
				$(RM) $(OBJECT) test/test.o
				$(RMDIR) $(FOLDER)

fclean		:
				$(RM) $(OBJECT) test/test.o
				$(RMDIR) $(FOLDER)
				$(RM) $(NAME) test/test.out

re			:	fclean all
