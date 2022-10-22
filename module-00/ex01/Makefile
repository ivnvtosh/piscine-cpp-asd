# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccamie <ccamie@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 16:35:48 by ccamie            #+#    #+#              #
#    Updated: 2022/10/22 11:11:32 by ccamie           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SHELL		=	/bin/sh

CC			=	c++

CPPFLAGS	=	-Wall -Wextra -Werror
CPPFLAGS	+=	-std=c++98
CPPFLAGS	+=	-I include
CPPFLAGS	+=	-g

CXXFLAGS	=	

MKDIR		=	mkdir -p

RMDIR		=	rm -rf
RM			=	rm -f

NAME		=	phonebook.out

_HEADER		=	ClassContact.hpp	\
				ClassPhoneBook.hpp	\
				Message.hpp			\

_SOURCE		=	ClassContact.cpp	\
				ClassPhoneBook.cpp	\
				Main.cpp			\
				Message.cpp			\
				ReadLine.cpp		\
				Utils.cpp			\

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
				./$(NAME) < test/test-00 > test/returned-00.log
				diff test/expected-00 test/returned-00.log
				./$(NAME) < test/test-01 > test/returned-01.log
				diff test/expected-01 test/returned-01.log
				./$(NAME) < test/test-02 > test/returned-02.log
				diff test/expected-02 test/returned-02.log
				./$(NAME) < test/test-03 > test/returned-03.log
				diff test/expected-03 test/returned-03.log
				./$(NAME) < test/test-04 > test/returned-04.log
				diff test/expected-04 test/returned-04.log
				./$(NAME) < test/test-05 > test/returned-05.log
				diff test/expected-05 test/returned-05.log
				./$(NAME) < test/test-06 > test/returned-06.log
				diff test/expected-06 test/returned-06.log
				./$(NAME) < test/test-07 > test/returned-07.log
				diff test/expected-07 test/returned-07.log
				./$(NAME) < test/test-08 > test/returned-08.log
				diff test/expected-08 test/returned-08.log
				./$(NAME) < test/test-09 > test/returned-09.log
				diff test/expected-09 test/returned-09.log
				./$(NAME) < test/test-10 > test/returned-10.log
				diff test/expected-10 test/returned-10.log

clean		:
				$(RM) $(OBJECT)
				$(RMDIR) $(FOLDER)

fclean		:
				$(RM) $(OBJECT)
				$(RMDIR) $(FOLDER)
				$(RM) $(NAME)

re			:	fclean all
