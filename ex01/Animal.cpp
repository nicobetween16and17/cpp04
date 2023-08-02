#include "Animal.hpp"

void Animal::makeSound() const{
	std::cout << "Animal like sound\n";
}

std::string Animal::getType() const{
	return "Animal";
}

Animal::~Animal(){
	std::cout<<"Animal died\n";
}

Animal::Animal(){
	std::cout << "random Animal created\n";
}

Animal &Animal::operator=(const Animal &c){
	if (this != &c)
	{
		this->_type = c._type;
	}
	return *this;
}
Animal::Animal(const Animal &a){
	this->_type = a._type;
}