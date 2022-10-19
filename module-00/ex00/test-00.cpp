/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test-00.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccamie <ccamie@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 01:15:21 by ccamie            #+#    #+#             */
/*   Updated: 2022/10/20 01:50:04 by ccamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

int	main(void) {
	std::string expected;
	std::string returned;

	expected = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::getline(std::cin, returned);

	if (returned == expected) {
		std::cout << "\x1b[34mTEST 00 SUCCESS\x1b[0m\n";
		std::cout << "\x1b[35mExpected: " << expected << "\x1b[0m\n";
		std::cout << "\x1b[36mReturned: " << returned << "\x1b[0m\n";
		return EXIT_SUCCESS;
	} else {
		std::cout << "\x1b[31mFAILURE\x1b[0m\n";
		std::cout << "\x1b[33mExpected: " << expected << "\x1b[0m\n";
		std::cout << "\x1b[33mReturned: " << returned << "\x1b[0m\n";
		return EXIT_FAILURE;
	}
}
