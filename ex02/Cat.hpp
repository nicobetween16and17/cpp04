#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal{
private:
	Brain *_brain;;
public:
	void makeSound(void) const;
	std::string getType(void) const;
	Cat();
	~Cat();
	Brain *getBrain(void);
	Cat &operator=(const Cat &c);
	Cat(Cat &a);
};

#endif