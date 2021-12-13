#include "Karen.hpp"
#include <iostream>

void Karen::debug()
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my"
				 " 7XL-double-cheese-triple-pickle-special-ketchup burger."
				 " I just love it!" << std::endl;
}

void Karen::info()
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. "
				 "You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning()
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free."
				 "I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error()
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level)
{
	void (Karen::*farr[4])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	int i = level[0] == 'D' ? 0 : level[0] == 'I' ? 1 : level[0] == 'W' ? 2 : level[0] == 'E' ? 3 : -1;
	if (i == -1)
		std::cout << "Unknown level" << std::endl;
	else
		(this->*farr[i])();
}

Karen::~Karen()
{}

Karen::Karen()
{}
