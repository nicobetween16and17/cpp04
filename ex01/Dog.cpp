#include "Dog.hpp"

void Dog::makeSound() const{
	std::cout << "Dogs goes bark bark\n";
}

std::string Dog::getType() const{
	return "Dog";
}
Dog::Dog(){
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << "A dog is born\n";
}
Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog "<< this->_type <<" died thinking about " << this->_brain->getThought(0) << std::endl;
}

Dog &Dog::operator=(const Dog &c){
	this->_type = c._type;
	this->_brain = new Brain(*c.getBrain());

	return (*this);
}

Brain* Dog::getBrain() const {
	return this->_brain;
}
Dog::Dog(const Dog &a) : Animal(a) {
	this->_brain = new Brain(*a.getBrain());
}