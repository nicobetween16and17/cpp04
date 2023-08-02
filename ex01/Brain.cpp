#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "new brain\n";
	this->_current_idea = 0;
}
Brain::~Brain(){std::cout << "braindead\n";}
int Brain::getIdea(){
	return (this->_current_idea);
}

void Brain::setIdea(int value)
{
	if (value > 99)
		value -= 100;
	this->_current_idea = value;
}

void Brain::addIdea(std::string idea){
	this->_ideas[this->_current_idea] = idea;
	this->setIdea(this->getIdea() + 1);
}

std::string Brain::getThought(int index){
	if (index > 100)
		index = index % 100;
	return this->_ideas[index];
}

Brain &Brain::operator=(const Brain &c){
	std::cout << "assign brain\n";
	for (int i = 0; i < 100; ++i) {
		this->_ideas[i] = c._ideas[i];
	}
	this->_current_idea = c._current_idea;
	return (*this);
}

Brain::Brain(Brain &b){
	std::cout << "copy brain\n";
	for (int i = 0; i < 100; ++i) {
		this->_ideas[i] = b._ideas[i];
	}
	this->_current_idea = b._current_idea;
}