# include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->type = "Cat";
	this->catBrain = new Brain();
	std::cout << "Cat default Constructor called!" << std::endl;
}

Cat::Cat( const Cat& cat ) : Animal()
{
	std::cout << "Cat copy constructor called!" << std::endl;
	this->catBrain = new Brain(*cat.catBrain);
	this->type = cat.getType();
}

Cat &Cat::operator=( const Cat& src )
{
	std::cout << "Cat copy assignment operator called!" << std::endl;
	if (this == &src)
		return *this;
	delete this->catBrain;
	this->catBrain = new Brain(*src.catBrain);
	this->type = src.getType();
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called!" << std::endl;
	delete this->catBrain;
}

void	Cat::makeSound( void ) const
{
	std::cout << this->type << " says: **Meaaww**" << std::endl;
}
