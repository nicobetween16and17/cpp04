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
	if (this != &c)
		this->_type = c._type;
	return (*this);
}
Brain* Dog::getBrain(){
	return this->_brain;
}
Dog::Dog(Dog &a) {
	this->_type = a._type;
	for (int i = 0; i < 100; ++i) {
		this->_brain->addIdea(a._brain->getThought(i));
	}
}