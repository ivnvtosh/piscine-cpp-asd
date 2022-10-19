/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test-00.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccamie <ccamie@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 01:15:21 by ccamie            #+#    #+#             */
/*   Updated: 2022/10/20 02:50:07 by ccamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

std::string read() {
	std::string string;
	std::string temporary;

	while (std::getline(std::cin, temporary)) {
		string += temporary;
		string += "\n";
	}

	return string;
}

void print(std::string string) {
	int i = 0;
	while (int character = string[i]) {
		switch (character) {
		case '\n':
			std::cout << "\x1b[36m\\n";
			break;
		
		default:
			std::cout << (char)character;
			break;
		}
		
		i += 1;
	}
}

int	main(int argc, char **argv) {
	if (argc == 1) {
		return EXIT_FAILURE;
	}

	std::string expected;
	std::string returned;

	expected = argv[1];
	expected += "\n";
	returned = read();

	if (returned == expected) {
		std::cout << "\x1b[32mSUCCESS\x1b[0m\n";
		std::cout << "-------\n";
		std::cout << "\x1b[37mExpected: "; print(expected); std::cout << "\x1b[0m\n";
		std::cout << "\x1b[37mReturned: "; print(returned); std::cout << "\x1b[0m\n";
		std::cout << "-------\n";
		return EXIT_SUCCESS;
	} else {
		std::cout << "\x1b[31mFAILURE\x1b[0m\n";
		std::cout << "-------\n";
		std::cout << "\x1b[37mExpected: "; print(expected); std::cout << "\x1b[0m\n";
		std::cout << "\x1b[37mReturned: "; print(returned); std::cout << "\x1b[0m\n";
		std::cout << "-------\n";
		return EXIT_FAILURE;
	}
}
