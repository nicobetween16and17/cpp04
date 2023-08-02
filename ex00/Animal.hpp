#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
class Animal
{
protected:
	std::string _type;
public:
	virtual void makeSound() const;
	virtual std::string getType(void) const;
	virtual ~Animal();
	Animal(std::string type);
	Animal();
	Animal &operator=(const Animal &c);
	Animal(Animal &a);
};

#endif