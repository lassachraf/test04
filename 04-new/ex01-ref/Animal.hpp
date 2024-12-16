/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alassiqu <alassiqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 20:43:48 by alassiqu          #+#    #+#             */
/*   Updated: 2024/12/11 15:41:04 by alassiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string	_type;

	public:
		Animal();
		Animal( const Animal& Animal );
		Animal&	operator=( const Animal& animalSrc );
		virtual	~Animal();

		virtual std::string		getType( void ) const;
		virtual void			makeSound( void ) const;
};

#endif /* ANIMAL_HPP */