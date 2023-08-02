#pragma once

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal{
private:
	;
public:
	void makeSound(void) const;
	std::string getType(void) const;
	~WrongCat();
	WrongCat();
	WrongCat &operator=(const WrongCat &c);
	WrongCat(WrongCat &a);
};