/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alassiqu <alassiqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 15:47:35 by alassiqu          #+#    #+#             */
/*   Updated: 2024/12/12 13:55:02 by alassiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Brain.hpp"
# include "Animal.hpp"

class Cat : public Animal
{
	Brain*	catBrain;

	public:
		Cat();
		Cat( const Cat& Cat );
		Cat&	operator=( const Cat& src );
		~Cat();

		void		makeSound( void ) const;
};

#endif /* CAT_HPP */