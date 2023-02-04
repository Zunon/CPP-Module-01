//
// Created by Khalifa Almheiri on 2/4/23.
//

#ifndef CPP_MODULE_01_HUMANA_H
# define CPP_MODULE_01_HUMANA_H
# include <string>
# include <iostream>
# include "Weapon.h"

class HumanA {
	std::string name;
	bool		defaulted;
	Weapon		*weapon;
	public:
		HumanA (void);
		HumanA (const HumanA &);
		HumanA (const Weapon &);
		HumanA (std::string, const Weapon &);
		void	attack (void);
		HumanA	&operator= (const HumanA &);
		~HumanA (void);
};

#endif //CPP_MODULE_01_HUMANA_H
