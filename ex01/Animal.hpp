#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include "Brain.hpp"
class Animal
{
protected:
	std::string _type;
public:
	virtual void makeSound() const;
	virtual std::string getType(void) const;
	virtual ~Animal();
	Animal();
	Animal &operator=(const Animal &c);
	Animal(const Animal &a);
};

#endif