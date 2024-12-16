/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alassiqu <alassiqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 15:34:42 by alassiqu          #+#    #+#             */
/*   Updated: 2024/12/11 15:41:14 by alassiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

Animal::Animal() : _type("Pegasus")
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
	this->_type = animalSrc._type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called!" << std::endl;
}

void	Animal::makeSound( void ) const
{
    std::cout << this->_type << " doesn't make any sound !!" << std::endl;
}

std::string	Animal::getType( void ) const
{
	return this->_type;
}
