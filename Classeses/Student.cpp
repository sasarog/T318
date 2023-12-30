#include "Student.h"

void classes::Student::SetSrBall(double srBall)
{
	if (srBall >= 0 && srBall <= 10) {
		this->_srBall = srBall;
	}
}

double classes::Student::GetSrBall()
{
	return this->_srBall;
}

void classes::Student::Print()
{
	Chelovek::Print();
	cout << "SrBall: " << this->_srBall << endl;
}
