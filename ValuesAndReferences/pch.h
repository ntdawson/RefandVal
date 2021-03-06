// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

#ifndef PCH_H
#define PCH_H
#include <string>
struct Employee {


	enum class TITLE {
		Boss, Grunt, Supervisor
	};

	std::string firstName;
	std::string lastName;
	std::string homePhone;
	std::string address;
	std::string city;
	std::string state;
	int zip;
	int employeeNumber;
	std::string jobTitle;

	Employee(std::string firstName, std::string lastName, std::string homePhone, std::string address, std::string city, int zip, int employeeNumber, std::string jobTitle) {
		this->firstName = firstName;
		this->lastName = lastName;
		this->homePhone = homePhone;
		this->address = address;
		this->city = city;
		this->zip = zip;
		this->employeeNumber = employeeNumber;
		this->jobTitle = jobTitle;
	}


	std::string print() {
		return this->firstName + " " + this->lastName + " " + this->homePhone + " " + this->address + " " + this->city + " " + std::to_string(this->zip) + " " + std::to_string(this->employeeNumber) + " " + jobTitle;
	};
};
// TODO: add headers that you want to pre-compile here

#endif //PCH_H
