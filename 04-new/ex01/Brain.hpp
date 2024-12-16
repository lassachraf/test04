#pragma once

#include <iostream>

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain( void );
		Brain(const Brain& brain);
		Brain&		operator=(const Brain& brainSrc);
		~Brain( void );

		std::string	*getIdeas( void );
		void		setIdea(std::string _idea, unsigned int index);
};
