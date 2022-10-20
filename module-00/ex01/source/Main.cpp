/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccamie <ccamie@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:35:46 by ccamie            #+#    #+#             */
/*   Updated: 2022/10/20 20:35:54 by ccamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassPhoneBook.hpp"
#include <cstdlib>

void welcomeMessage();
void invalidInputMessage();
void newContactMessage();
void contactRecordedMessage();
void yourContactMessage();
void emptyMessage();
void invalidIndexMessage();
void byeMessage();
void emergencyMessage();

std::string readLine();
bool onlyDigit(std::string string);
int myAtoi(std::string string);

int getIndex() {
	std::string	string;

	int	index;
	while (1) {
		std::cout << "\n\033[1F"
				     "\x1b[43m\x1b[37m\x1b[1m"
					 " 🦍 Индекс         : "
			    	 "\x1b[0m"
			 		 " ";

		std::cout << "\x1b[47m\x1b[30m\x1b[1m"
					 " \0337                      \0338\0337";
		std::getline(std::cin, string);

		std::cout << "\0338" << string << "\n";

		if (std::cin.eof() == true) {
			return -1;
		}

		if (string.empty() == true) {
			std::cout << "\x1b[0m" << std::endl;

			std::cout << "\x1b[41m\x1b[30m\x1b[1m"
						 " ❌ Введите индекс!                          "
						 "\x1b[0m\n";

			std::cout << "\x1b[0m" << std::endl;
			continue;
		}

		if (onlyDigit(string) == false) {
			std::cout << "\x1b[0m" << std::endl;
			invalidInputMessage();
			continue;
		}

		index = myAtoi(string);
		break;
	}


	std::cout << "\x1b[0m";
	std::cout << std::endl;

	return index;
}

void searchContact(PhoneBook *phoneBook) {
	if (phoneBook->isEmpty() == true) {
		emptyMessage();
		return;
	}

	yourContactMessage();
	phoneBook->description();

	int	index;
	while (1) {
		index = getIndex();

		if (std::cin.eof() == true) {
			return;
		}

		if (phoneBook->isEmpty(index) == true) {
			invalidIndexMessage();
			continue;
		}

		break;
	}

	phoneBook->description(index);
}

int main() {
	PhoneBook phoneBook;
	std::string command;

	welcomeMessage();

	while (1) {

		command = readLine();

		if (std::cin.eof() == true) {
			emergencyMessage();
			break;
		}

		if (command == "add") {
			newContactMessage();
			phoneBook.newContact();

			if (std::cin.eof() == true) {
				std::cout << "\x1b[0m" << std::endl;
				emergencyMessage();
				break;
			}

			contactRecordedMessage();
			continue;
		}

		if (command == "search") {
			searchContact(&phoneBook);

			if (std::cin.eof() == true) {
				std::cout << "\x1b[0m" << std::endl;
				emergencyMessage();
				break;
			}

			continue;
		}

		if (command == "exit") {
			byeMessage();
			break;
		}

		invalidInputMessage();

	}

	return EXIT_SUCCESS;
}

