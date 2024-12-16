/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alassiqu <alassiqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:48:58 by alassiqu          #+#    #+#             */
/*   Updated: 2024/12/12 13:56:43 by alassiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "Brain default contructor called!" << std::endl;
}

Brain::Brain( const Brain& brain )
{
	std::cout << "Brain copy contructor called!" << std::endl;
	*this = brain;
}

Brain&		Brain::operator=(const Brain& brainSrc)
{
	std::cout << "Brain copy assignment operator called!" << std::endl;
	if (this == &brainSrc)
		return *this;
	for(int i = 0; i < 100; i++)
		(this->getIdeas())[i] = brainSrc.ideas[i];
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called!" << std::endl;
}

std::string*	Brain::getIdeas( void )
{
	return this->ideas;
}

void	Brain::setIdea(std::string _idea, unsigned int index)
{
	if (index < 100)
		this->ideas[index] = _idea;
}
