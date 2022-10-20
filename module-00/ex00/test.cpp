/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccamie <ccamie@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 01:15:21 by ccamie            #+#    #+#             */
/*   Updated: 2022/10/20 13:21:54 by ccamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

#define COLOR_RED     "\x1b[31m"
#define COLOR_GREEN   "\x1b[32m"
#define COLOR_CYAN    "\x1b[36m"
#define COLOR_WHITE   "\x1b[37m"
#define COLOR_DEFAULT "\x1b[0m"

#define MESSAGE_INVALID COLOR_RED   "INVALID" COLOR_DEFAULT
#define MESSAGE_SUCCESS COLOR_GREEN "SUCCESS" COLOR_DEFAULT
#define MESSAGE_FAILURE COLOR_RED   "FAILURE" COLOR_DEFAULT

#define SEPARATOR "-------"

std::string read() {
	std::string string;
	std::string temporary;

	while (std::getline(std::cin, temporary)) {
		string += temporary;

		if (std::cin.eof() == false){
            string += '\n';
        }
	}

	return string;
}

void print(std::string message, std::string string) {
	std::cout << COLOR_WHITE << message << ": ";

	int i = 0;
	while (int character = string[i]) {
		switch (character) {
		case '\n':
			std::cout << COLOR_CYAN "\\n" COLOR_WHITE;
			break;

		default:
			std::cout << (char)character;
			break;
		}

		i += 1;
	}

	std::cout << COLOR_DEFAULT << std::endl;
}

int	main(int argc, char **argv) {
	if (argc == 1) {
		std::cout << MESSAGE_INVALID << std::endl;
		return EXIT_FAILURE;
	}

	std::string expected;
	std::string returned;

	expected = argv[1];
	expected += "\n";
	returned = read();

	if (returned == expected) {
		std::cout << MESSAGE_SUCCESS << std::endl;
		std::cout << SEPARATOR << std::endl;
		print("Expected", expected);
		print("Returned", returned);
		std::cout << SEPARATOR << std::endl;
		return EXIT_SUCCESS;
	} else {
		std::cout << MESSAGE_FAILURE << std::endl;
		std::cout << SEPARATOR << std::endl;
		print("Expected", expected);
		print("Returned", returned);
		std::cout << SEPARATOR << std::endl;
		return EXIT_FAILURE;
	}
}
