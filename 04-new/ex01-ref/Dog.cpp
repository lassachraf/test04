/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alassiqu <alassiqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 15:40:46 by alassiqu          #+#    #+#             */
/*   Updated: 2024/12/16 20:11:53 by alassiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"
# include "Brain.hpp"

Dog::Dog() : Animal()
{
	this->_type = "Dog";
	this->dogBrain = new Brain();
	std::cout << "Dog default Constructor called!" << std::endl;
}

Dog::Dog( const Dog& dog ) : Animal()
{
	std::cout << "Dog copy constructor called!" << std::endl;
	this->dogBrain = new Brain(*dog.dogBrain);
	this->_type = dog.getType();
}

Dog &Dog::operator=( const Dog& src )
{
	std::cout << "Dog copy assignment operator called!" << std::endl;
	if (this == &src)
		return *this;
	delete this->dogBrain;
	this->dogBrain = new Brain(*src.dogBrain);
	this->_type = src.getType();
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called!" << std::endl;
	delete this->dogBrain;
}

void	Dog::makeSound( void ) const
{
	std::cout << this->_type << " says: **Woof**" << std::endl;
}
