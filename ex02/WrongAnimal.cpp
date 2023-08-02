#include "WrongAnimal.hpp"

void WrongAnimal::makeSound() const{
	std::cout << "WrongAnimal like sound\n";
}

std::string WrongAnimal::getType() const{
	return this->_type;
}

WrongAnimal::~WrongAnimal(){std::cout<<"WrongAnimal died\n";}

WrongAnimal::WrongAnimal(){
	this->_type = "WrongAnimal";
	std::cout << "random WrongAnimal created\n";
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &c){
	if (this != &c)
	{
		this->_type = c._type;
	}
	return *this;
}
WrongAnimal::WrongAnimal(WrongAnimal &a){
	this->_type = a._type;
}