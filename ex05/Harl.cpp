//
// Created by Khalifa Almheiri on 2/5/23.
//

#include "Harl.hpp"

void	Harl::debug(void) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void) {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

Harl::Harl(void) {
	functionMap[0] = (harlNode) {"info", &Harl::info};
	functionMap[1] = (harlNode) {"debug", &Harl::debug};
	functionMap[2] = (harlNode) {"warning", &Harl::warning};
	functionMap[3] = (harlNode) {"error", &Harl::error};
}

Harl::Harl(const Harl &harl) {
	functionMap[0] = harl.functionMap[0];
	functionMap[1] = harl.functionMap[1];
	functionMap[2] = harl.functionMap[2];
	functionMap[3] = harl.functionMap[3];
}

Harl	&Harl::operator= (const Harl &harl) {
	if (this != &harl) {
		functionMap[0] = harl.functionMap[0];
		functionMap[1] = harl.functionMap[1];
		functionMap[2] = harl.functionMap[2];
		functionMap[3] = harl.functionMap[3];
	}
	return (*this);
}

void	Harl::complain(std::string level) {
	for (int i = 0; i < 4; i++)
		if (level == functionMap[i].level)
			(this->*functionMap[i].member)();
}

Harl::~Harl(void) {
	std::cout << "HARL DESTROYED!" << std::endl;
}
