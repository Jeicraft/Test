/* main.cpp */

#include <iostream>

#include "module.hpp"

int
main(void)
{
	std::cout << "Hello, World!\n";

	int a, b;

	std::cin >> a
	         >> b;

	auto ret = fuckingawesome(a, b);

	std::cout << ret << std::endl;

	return 0;
}
