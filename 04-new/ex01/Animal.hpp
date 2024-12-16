#pragma once

# include <iostream>

class Animal
{
	protected:
		std::string	type;

	public:
		Animal( void );
		Animal( const Animal& Animal );
		Animal&	operator=( const Animal& animalSrc );
		virtual	~Animal( void );
		virtual std::string		getType( void ) const;
		virtual void			makeSound( void ) const;
};
