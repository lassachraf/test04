/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alassiqu <alassiqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 15:51:37 by alassiqu          #+#    #+#             */
/*   Updated: 2024/12/16 16:00:12 by alassiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"
# include "Cat.hpp"
# include "Animal.hpp"
# include "WrongCat.hpp"
# include "WrongAnimal.hpp"

int main()
{
	// const int size = 6;
	// Animal* animals[size];

	// for (int i = 0; i < size / 2; ++i)
	// 	animals[i] = new Dog();

	// std::cout << std::endl;

	// for (int i = size / 2; i < size; ++i)
	// 	animals[i] = new Cat();

	// std::cout << std::endl;

	// std::cout << "Animals making sounds:" << std::endl;

	// for (int i = 0; i < size; ++i)
	// 	animals[i]->makeSound();

	// std::cout << std::endl;

	// std::cout << "Deleting animals:" << std::endl;

	// for (int i = 0; i < size; ++i)
	// 	delete animals[i];

	Cat basic;
	Cat tmp = basic;

	return 0;
}
