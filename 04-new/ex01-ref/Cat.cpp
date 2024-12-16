/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alassiqu <alassiqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 15:49:27 by alassiqu          #+#    #+#             */
/*   Updated: 2024/12/16 15:59:55 by alassiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"
# include "Brain.hpp"

Cat::Cat() : Animal()
{
	this->_type = "Cat";
	this->catBrain = new Brain();
	std::cout << "Cat default Constructor called!" << std::endl;
}

Cat::Cat( const Cat& cat ) : Animal()
{
	std::cout << "Cat copy constructor called!" << std::endl;
	this->catBrain = new Brain(*cat.catBrain);
	this->_type = cat.getType();
}

Cat &Cat::operator=( const Cat& src )
{
	std::cout << "Cat copy assignment operator called!" << std::endl;
	if (this == &src)
		return *this;
	delete this->catBrain;
	this->catBrain = new Brain(*src.catBrain);
	this->_type = src.getType();
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called!" << std::endl;
	delete this->catBrain;
}

void	Cat::makeSound( void ) const
{
	std::cout << this->_type << " says: **Meaaww**" << std::endl;
}
