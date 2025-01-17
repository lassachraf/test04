# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("WrongPegasus")
{
	std::cout << "WrongAnimal Default Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& wrAni)
{
	std::cout << "WrongAnimal Copy Constructor called" << std::endl;
	*this = wrAni;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Deconstructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
	std::cout << "WrongAnimal Assignation operator called" << std::endl;
	if (this == &src)
		return *this;

	this->type = src.type;
	return *this;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << this->getType() << " says: **WrongAnimal sound**" << std::endl;
}

std::string	WrongAnimal::getType( void ) const
{
    return this->type;
}
