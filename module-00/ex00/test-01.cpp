/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test-01.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccamie <ccamie@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 01:15:23 by ccamie            #+#    #+#             */
/*   Updated: 2022/10/20 02:16:41 by ccamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

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

int	main(void) {
	std::string expected;
	std::string returned;

	expected = "SHHHHH... I THINK THE STUDENTS ARE ASLEEP...\n";
	std::getline(std::cin, returned);

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
