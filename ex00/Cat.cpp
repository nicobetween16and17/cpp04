#include "Cat.hpp"

void Cat::makeSound() const{
	std::cout << "Cat goes mew mew\n";
}

std::string Cat::getType() const{
	return this->_type;
}

Cat::~Cat()
{
	std::cout<<"Cat died\n";
}

Cat::Cat(){
	this->_type = "Cat";
	std::cout << "random cat created\n";
}

Cat &Cat::operator=(const Cat &c){
	if (this != &c)
		this->_type = c._type;
	return (*this);
}

Cat::Cat(Cat &a) {
	this->_type = a._type;
}