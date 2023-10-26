#include "Stud.h"

Stud::Stud()
{
}

Stud::Stud(int v, std::string s)
{
	this->setName(s);
	this->setVozr(v);
}

void Stud::setSrBall(double srBall)
{
	this->srBall = srBall;
}

double Stud::getSrBall()
{
	return this->srBall;
}

void Stud::print()
{
	std::cout << std::endl << "Print Stud" << std::endl<<
		"Name: " << this->name << std::endl <<
		"Age: " << this->vozr << std::endl <<
		"SrBall: " << this->srBall << std::endl;
}
