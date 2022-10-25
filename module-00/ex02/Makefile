# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccamie <ccamie@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 16:35:48 by ccamie            #+#    #+#              #
#    Updated: 2022/10/25 12:12:53 by ccamie           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SHELL		=	/bin/sh

CC			=	c++

CPPFLAGS	=	-Wall -Wextra -Werror
# CPPFLAGS	+=	-std=c++98x
CPPFLAGS	+=	-I include
CPPFLAGS	+=	-g

CXXFLAGS	=	

MKDIR		=	mkdir -p

RMDIR		=	rm -rf
RM			=	rm -f

NAME		=	account.out

_HEADER		=	Account.hpp

_SOURCE		=	Account.cpp	\
				Tests.cpp	\

SOURCE		=	$(addprefix source/, $(_SOURCE))
OBJECT		=	$(addprefix object/, $(_SOURCE:.cpp=.o))
FOLDER		=	$(sort $(dir object/ $(OBJECT)))
HEADER		=	$(addprefix include/, $(_HEADER))

.SUFFIXES	:
.SUFFIXES	:	.cpp .o

.PHONY		:	all clean fclean re test

%.o			:	%.cpp
				$(CC) $(CPPFLAGS) -c $< -o $@

object/%.o	:	source/%.cpp 
				$(CC) $(CPPFLAGS) -c $< -o $@

all			:	$(FOLDER) $(NAME)

$(FOLDER)	:
				$(MKDIR) $@

$(NAME)		:	$(OBJECT)
				$(CC) $(CXXFLAGS) $(OBJECT) -o $(NAME)

test		:	all
				./$(NAME) > test/returned.log
				cat test/returned.log | cut -d] -f2 > test/temporary-returned.log
				cat test/expected-0 | cut -d] -f2 > test/temporary-expected-0.log
				cat test/expected-1 | cut -d] -f2 > test/temporary-expected-1.log
				cat test/temporary-returned.log
				cat test/temporary-expected-1.log
				cat test/temporary-expected-0.log
				diff test/temporary-expected-0.log test/temporary-returned.log || diff test/temporary-expected-1.log test/temporary-returned.log

clean		:
				$(RM) $(OBJECT)
				$(RMDIR) $(FOLDER)

fclean		:
				$(RM) $(OBJECT)
				$(RMDIR) $(FOLDER)
				$(RM) $(NAME)

re			:	fclean all
