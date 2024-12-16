#pragma once

# include "Brain.hpp"
# include "Animal.hpp"

class Cat : public Animal
{
	Brain*	catBrain;

	public:
		Cat();
		Cat( const Cat& Cat );
		Cat&	operator=( const Cat& src );
		~Cat();

		void		makeSound( void ) const;
};
