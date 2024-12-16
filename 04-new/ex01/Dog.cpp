# include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->type = "Dog";
	this->dogBrain = new Brain();
	std::cout << "Dog default Constructor called!" << std::endl;
}

Dog::Dog( const Dog& dog ) : Animal()
{
	std::cout << "Dog copy constructor called!" << std::endl;
	this->dogBrain = new Brain(*dog.dogBrain);
	this->type = dog.getType();
}

Dog &Dog::operator=( const Dog& src )
{
	std::cout << "Dog copy assignment operator called!" << std::endl;
	if (this == &src)
		return *this;
	delete this->dogBrain;
	this->dogBrain = new Brain(*src.dogBrain);
	this->type = src.getType();
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called!" << std::endl;
	delete this->dogBrain;
}

void	Dog::makeSound( void ) const
{
	std::cout << this->type << " says: **Woof**" << std::endl;
}
