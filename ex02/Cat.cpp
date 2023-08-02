#include "Cat.hpp"

void Cat::makeSound() const{
	std::cout << "Cat goes mew mew\n";
}

std::string Cat::getType() const{
	return this->_type;
}
Cat::Cat(){
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << "A cat is born\n";
}
Cat::~Cat()
{
	delete this->_brain;
	std::cout<<"Cat died\n";
}

Cat &Cat::operator=(const Cat &c){
	if (this != &c)
		this->_type = c._type;
	return (*this);
}
Brain* Cat::getBrain(){
	return this->_brain;
}

Cat::Cat(Cat &a) {
	this->_type = a._type;
	for (int i = 0; i < 100; ++i) {
		this->_brain->addIdea(a._brain->getThought(i));
	}
}