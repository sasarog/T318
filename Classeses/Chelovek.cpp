#include "Chelovek.h"
using namespace std;
namespace classes {
	Chelovek::Chelovek()
	{
		cout << "\n Chelovek Default Constructor\n";
	}

	void Chelovek::SetName(const string& name)
	{
		if (name != "") {
			this->_name = name;
		}
	}

	string Chelovek::GetName()
	{
		return this->_name;
	}

	void Chelovek::SetAge(double age)
	{
		if (age >= 0) {
			this->_age = age;
		}
	}

	double Chelovek::GetAge()
	{
		return this->_age;
	}

	void Chelovek::Print()
	{
		cout << "\nName: " << this->_name
			<< "\nAge: " << this->_age << endl;
	}

}