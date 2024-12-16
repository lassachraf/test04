# include "Dog.hpp"
# include "Cat.hpp"
# include "Animal.hpp"
# include "WrongCat.hpp"
# include "WrongAnimal.hpp"

int main()
{
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	const Animal* pegasus = new Animal();

	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << pegasus->getType() << " " << std::endl;

	dog->makeSound();
	cat->makeSound();
	pegasus->makeSound();

	delete dog;
	delete cat;
	delete pegasus;

	std::cout << " ++++++++++++++++++++++++++++++++ " << std::endl;
	std::cout << " ++++++++++++++++++++++++++++++++ " << std::endl;
	std::cout << " ++++++++++++++++++++++++++++++++ " << std::endl;

	const WrongCat* wrCat = new WrongCat();
	const WrongAnimal* wrPegasus = new WrongAnimal();

	std::cout << wrCat->getType() << " " << std::endl;
	std::cout << wrPegasus->getType() << " " << std::endl;

	wrCat->makeSound();
	wrPegasus->makeSound();

	delete wrCat;
	delete wrPegasus;
	
	return 0;
}
