#include "WrongCat.hpp"

void WrongCat::makeSound() const{
	std::cout << "WrongCat goes mew mew\n";
}

std::string WrongCat::getType() const{
	return this->_type;
}

WrongCat::~WrongCat()
{
	std::cout<<"WrongCat died\n";
}

WrongCat::WrongCat(){
	this->_type = "WrongCat";
	std::cout << "random Wrongcat created\n";
}

WrongCat &WrongCat::operator=(const WrongCat &c){
	if (this != &c)
		this->_type = c._type;
	return (*this);
}

WrongCat::WrongCat(WrongCat &a) {
	this->_type = a._type;
}