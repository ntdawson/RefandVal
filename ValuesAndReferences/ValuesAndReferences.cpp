
#include "pch.h"
#include <iostream>
#include <string>

void changeThreeThings(std::string& a, std::string& b, std::string& c);

int main()
{
	std::string one = "this is long";
	std::string two = "this is short";
	std::string three = "the last one lied";
	std::cout << "one is: " << one << std::endl << "two is: " <<  two << std::endl << "three is: " <<  three << std::endl;
	changeThreeThings(one, two, three);
	std::cout << "one is: " << one << std::endl << "two is: " << two << std::endl << "three is: " << three << std::endl;
}

void changeThreeThings(std::string& a, std::string& b, std::string& c) {
	a = b;
	b = "test";
	c.replace(0, 10, "yyyyyyyyyy");
}