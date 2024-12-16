/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alassiqu <alassiqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 20:56:44 by alassiqu          #+#    #+#             */
/*   Updated: 2024/12/11 17:47:45 by alassiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Brain.hpp"
# include "Animal.hpp"

class Dog : public Animal
{
	Brain*	dogBrain;
	
	public:
		Dog();
		Dog( const Dog& dog );
		Dog&	operator=( const Dog& src );
		~Dog();

		void		makeSound( void ) const;
};

#endif /* DOG_HPP */
