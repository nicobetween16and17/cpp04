#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

std::string itoa(int a)
{
	std::string ss="";   //create empty string
	while(a)
	{
		int x = a % 10;
		a/=10;
		char i='0';
		i=i+x;
		ss=i+ss;      //append new character at the front of the string!
	}
	return ss;
}

int main()
{
	Dog basic;
	{std::cout << "coucou\n";
		Dog tmp = basic;

	}
}
