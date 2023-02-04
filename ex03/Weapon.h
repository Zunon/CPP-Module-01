//
// Created by Khalifa Almheiri on 2/4/23.
//

#ifndef CPP_MODULE_01_WEAPON_H
# define CPP_MODULE_01_WEAPON_H
# include <string>
# include <iostream>

class Weapon {
	std::string		type;
	public:
		Weapon (void);
		Weapon (const Weapon &);
		Weapon (std::string);
		std::string	getType (void);
		void		setType (std::string);
		Weapon		&operator= (const Weapon &);
		~Weapon (void);
};


#endif //CPP_MODULE_01_WEAPON_H
