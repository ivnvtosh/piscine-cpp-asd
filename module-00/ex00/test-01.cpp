/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test-01.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccamie <ccamie@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 01:15:23 by ccamie            #+#    #+#             */
/*   Updated: 2022/10/20 01:21:02 by ccamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

int	main(void) {
	std::string expected;
	std::string returned;

	expected = "SHHHHH... I THINK THE STUDENTS ARE ASLEEP...\n";
	std::getline(std::cin, returned);

	if (returned == expected) {
		std::cout << "\x1b[32mSUCCESS\x1b[0m\n";
		std::cout << "Expected: " << expected << std::endl;
		std::cout << "Returned: " << returned << std::endl;
		return EXIT_SUCCESS;
	} else {
		std::cout << "\x1b[31mFAILURE\x1b[0m\n";
		std::cout << "Expected: " << expected << std::endl;
		std::cout << "Returned: " << returned << std::endl;
		return EXIT_FAILURE;
	}
}
