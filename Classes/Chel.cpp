#include "Chel.h"
using namespace std;
Chel::Chel()
{
	cout << endl << "Default Constructor" << endl;
}

Chel::Chel(int v, string n)
{
	this->setVozr(v);
	this->setName(n);
	
}

void Chel::print()
{
	cout <<	endl << "Print Chel" <<	endl <<
		"name: " << this->name << endl <<
		"Age: " << this->vozr << endl;

}

void Chel::setVozr(int v)
{
	if (v < 0) {
		throw exception( "Age can't be less than 0");
}
	this->vozr = v;
}

int Chel::getVozr()
{
	return this->vozr;
}

void Chel::setName(std::string name)
{
	this->name = name;
}

std::string Chel::getName()
{
	return this->name;
}
