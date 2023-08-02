#include "Dog.hpp"

void Dog::makeSound() const{
	std::cout << "Dog goes bark bark\n";
}

std::string Dog::getType() const{
	return "Dog";
}

Dog::~Dog()
{
	std::cout << "dog died\n";
}

Dog::Dog(){
	this->_type = "Dog";
	std::cout << "random Dog created\n";
}

Dog &Dog::operator=(const Dog &c){
	if (this != &c)
		this->_type = c._type;
	return (*this);
}

Dog::Dog(Dog &a) {
	this->_type = a._type;
}