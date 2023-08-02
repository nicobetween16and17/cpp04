#include "Cat.hpp"

void Cat::makeSound() const{
	std::cout << "Cats goes meow meow\n";
}

std::string Cat::getType() const{
	return "Cat";
}
Cat::Cat(){
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << "A dog is born\n";
}
Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat "<< this->_type <<" died thinking about " << this->_brain->getThought(0) << std::endl;
}

Cat &Cat::operator=(const Cat &c){
	this->_type = c._type;
	if (_brain)
		delete this->_brain;
	this->_brain = new Brain(*c.getBrain());

	return (*this);
}

Brain* Cat::getBrain() const {
	return this->_brain;
}
Cat::Cat(const Cat &a) : Animal(a) {
	this->_brain = new Brain(*a.getBrain());
}