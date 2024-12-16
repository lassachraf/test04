/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alassiqu <alassiqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 15:54:54 by alassiqu          #+#    #+#             */
/*   Updated: 2024/12/12 15:34:08 by alassiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <iostream>

class WrongAnimal
{
	protected:
		std::string	_type;
	public:
		WrongAnimal();
		WrongAnimal( const WrongAnimal& wrAni );
		WrongAnimal&	operator=( const WrongAnimal& src );
		virtual ~WrongAnimal();

		std::string	getType(void) const;
		virtual void		makeSound(void) const;
};

#endif