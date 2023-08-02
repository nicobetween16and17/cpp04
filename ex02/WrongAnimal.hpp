#pragma once
#include <iostream>
class WrongAnimal{
protected:
	std::string _type;
public:
	void makeSound() const;

	std::string getType(void) const;

	~WrongAnimal();

	WrongAnimal();

	WrongAnimal &operator=(const WrongAnimal &c);

	WrongAnimal(WrongAnimal &a);
};