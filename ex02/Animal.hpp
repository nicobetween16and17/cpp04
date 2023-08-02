#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include "Brain.hpp"
class Animal
{
protected:
	std::string _type;
public:
	virtual void makeSound() const = 0;
	virtual std::string getType(void) const;
	virtual ~Animal();
	virtual Brain *getBrain(void);
	Animal();
	Animal &operator=(const Animal &c);
	Animal(Animal &a);
};

#endif