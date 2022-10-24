# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccamie <ccamie@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 13:45:45 by ccamie            #+#    #+#              #
#    Updated: 2022/10/22 20:34:29 by ccamie           ###   ########.fr        #
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

_SOURCE		=	megaphone.cpp

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

test		:	all
				./$(NAME) "shhhhh... I think the students are asleep..." > test/returned-00.log
				diff test/expected-00 test/returned-00.log
				./$(NAME) Damnit " ! " "Sorry students, I thought this thing was off." > test/returned-01.log
				diff test/expected-01 test/returned-01.log
				./$(NAME) > test/returned-02.log
				diff test/expected-02 test/returned-02.log

clean		:
				$(RM) $(OBJECT) test/test.o
				$(RMDIR) $(FOLDER)

fclean		:
				$(RM) $(OBJECT) test/test.o
				$(RMDIR) $(FOLDER)
				$(RM) $(NAME) test/test.out

re			:	fclean all
