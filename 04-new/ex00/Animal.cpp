# include "Animal.hpp"

Animal::Animal() : type("Pegasus")
{
	std::cout << "Animal default constructor called!" << std::endl;
}

Animal::Animal( const Animal& Animal )
{
	std::cout << "Animal copy constructor called!" << std::endl;
	*this = Animal;
}

Animal&	Animal::operator=( const Animal& animalSrc )
{
	std::cout << "Animal copy assignment operator called!" << std::endl;
	if (this == &animalSrc)
		return *this;
	this->type = animalSrc.type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called!" << std::endl;
}

void	Animal::makeSound( void ) const
{
	std::cout << this->type << " doesn't make any sound !!" << std::endl;
}

std::string	Animal::getType( void ) const
{
	return this->type;
}
