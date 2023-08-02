#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal{
private:
	Brain *_brain;
public:
	void makeSound(void) const;
	std::string getType(void) const;
	~Dog();
	Dog();
	Brain *getBrain(void);
	Dog &operator=(const Dog &c);
	Dog(Dog &a);

};

#endif