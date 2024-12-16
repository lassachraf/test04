/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alassiqu <alassiqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:48:55 by alassiqu          #+#    #+#             */
/*   Updated: 2024/12/11 17:03:52 by alassiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef 	BRAIN_HPP
#define		BRAIN_HPP

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

#endif /* BRAIN_HPP */