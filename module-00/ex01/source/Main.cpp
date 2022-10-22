/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccamie <ccamie@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:35:46 by ccamie            #+#    #+#             */
/*   Updated: 2022/10/22 02:52:31 by ccamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassPhoneBook.hpp"
#include "Message.hpp"
#include <cstdlib>

std::string readLine();

int main() {
	PhoneBook phoneBook;
	std::string command;

	Message::welcome();

	while (1) {
		try {
			command = readLine();
		} catch(...) {
			Message::emergency();
			break;
		}

		if (command == "add") {
			try {
				phoneBook.newContact();
			} catch(...) {
				Message::emergency();
				break;
			}
			Message::contactRecorded();
			continue;
		}

		if (command == "search") {
			try {
				phoneBook.searchContact();
			} catch(...) {
				Message::emergency();
				break;
			}
			continue;
		}

		if (command == "exit") {
			Message::bye();
			break;
		}

		Message::invalidInput();
	}

	return EXIT_SUCCESS;
}
