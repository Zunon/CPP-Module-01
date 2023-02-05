//
// Created by Khalifa Almheiri on 2/5/23.
//

#ifndef CPP_MODULE_01_HARL_HPP
# define CPP_MODULE_01_HARL_HPP
# include <string>
# include <iostream>

class Harl;

struct harlNode {
	std::string	level;
	void		(Harl::*member) (void);
};

class Harl {
	harlNode	functionMap[4];
	void		debug (void);
	void		info (void);
	void		warning (void);
	void		error (void);
	public:
		Harl (void);
		Harl (const Harl &);
		Harl	&operator= (const Harl &);
		void	complain (std::string);
		~Harl (void);
};


#endif //CPP_MODULE_01_HARL_HPP
