#pragma once

# include <string>
# include <iostream>

class WrongAnimal
{
	protected:
		std::string	type;

	public:
		WrongAnimal();
		WrongAnimal( const WrongAnimal& wrAni );
		WrongAnimal&	operator=( const WrongAnimal& src );
		virtual ~WrongAnimal();

		std::string	getType(void) const;
		void		makeSound(void) const;
};
