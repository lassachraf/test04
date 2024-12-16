#pragma once

# include "Animal.hpp"

class Dog : public Animal
{
	
	public:
		Dog();
		Dog( const Dog& dog );
		Dog&	operator=( const Dog& src );
		~Dog();

		void		makeSound( void ) const;
};
