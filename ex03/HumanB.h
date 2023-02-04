//
// Created by Khalifa Almheiri on 2/4/23.
//

#ifndef CPP_MODULE_01_HUMANB_H
# define CPP_MODULE_01_HUMANB_H
# include <string>
# include <iostream>
# include "Weapon.h"

class HumanB {
	std::string name;
	Weapon		*weapon;
public:
	HumanB (void);
	HumanB (const HumanB &);
	HumanB (std::string);
	HumanB (Weapon *);
	HumanB (std::string, Weapon *);
	void	attack (void);
	void	setWeapon (Weapon *);
	void	setWeapon (const Weapon &);
	HumanB	&operator= (const HumanB &);
	~HumanB (void);
};

#endif //CPP_MODULE_01_HUMANB_H
