#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
int main()
{
	const WrongAnimal *w = new WrongCat();
	std::cout << "|| " << w->getType() << " ||" << std::endl;
	w->makeSound();
	delete w;

	const Animal* meta = new Animal();
	std::cout << "|| "<< meta->getType() << " ||" << std::endl;
	meta->makeSound();
	delete meta;

	const Animal* j = new Dog();
	std::cout << "|| "<< j->getType() << " ||" << std::endl;
	j->makeSound();
	delete j;

	const Animal* i = new Cat();
	std::cout << "|| "<< i->getType() << " ||" << std::endl;
	i->makeSound(); //will output the cat sound!
	delete i;

	return 0;
}