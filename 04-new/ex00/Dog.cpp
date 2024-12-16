# include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->type = "Dog";
	std::cout << "Dog default Constructor called!" << std::endl;
}

Dog::Dog( const Dog& dog ) : Animal()
{
	std::cout << "Dog copy constructor called!" << std::endl;
	*this = dog;
}

Dog &Dog::operator=( const Dog& src )
{
	std::cout << "Dog copy assignment operator called!" << std::endl;
	if (this == &src)
		return *this;
	this->type = src.type;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called!" << std::endl;
}

void	Dog::makeSound( void ) const
{
	std::cout << this->type << " says: **Woof**" << std::endl;
}
