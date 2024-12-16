# include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->type = "Cat";
	std::cout << "Cat default Constructor called!" << std::endl;
}

Cat::Cat( const Cat& cat ) : Animal( cat )
{
	std::cout << "Cat copy constructor called!" << std::endl;
	*this = cat;
}

Cat &Cat::operator=( const Cat& src )
{
	std::cout << "Cat copy assignment operator called!" << std::endl;
	if (this == &src)
		return *this;
	this->type = src.type;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called!" << std::endl;
}

void	Cat::makeSound( void ) const
{
	std::cout << this->type << " says: **Meaaww** !" << std::endl;
}
