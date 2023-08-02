#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal{
private:
	;
public:
	void makeSound(void) const;
	std::string getType(void) const;
	~Cat();
	Cat();
	Cat &operator=(const Cat &c);
	Cat(Cat &a);
};

#endif