#pragma once

# include "Brain.hpp"
# include "Animal.hpp"

class Dog : public Animal
{
	Brain*	dogBrain;
	
	public:
		Dog();
		Dog( const Dog& dog );
		Dog&	operator=( const Dog& src );
		~Dog();

		void		makeSound( void ) const;
};
