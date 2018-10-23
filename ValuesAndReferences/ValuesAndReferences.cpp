
#include "pch.h"
#include <iostream>



void changeThreeThings(Employee *a, std::string& b, std::string& c);

int main()
{
	
	std::string one = "this is long";
	std::string two = "this is short";
	std::string three = "the last one lied";
	std::cout << "one is: " << one << std::endl << "two is: " <<  two << std::endl << "three is: " <<  three << std::endl;



	std::cout << "Teesting employees!" << std::endl;

	Employee *Steve = new Employee("Steve", "Jones", "508-111-1111", "123 fake street", "City", 10192, 99909, "boss");
	changeThreeThings(Steve, two, three);
	std::cout << "one is: " << one << std::endl << "two is: " << two << std::endl << "three is: " << three << std::endl;
	std::cout << Steve->print();
}

void changeThreeThings(Employee *a, std::string& b, std::string& c) {
	a->firstName = "part";
	b = "test";
	c.replace(0, 10, "yyyyyyyyyy");
}