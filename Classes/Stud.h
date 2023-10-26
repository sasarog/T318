#pragma once
#include "Chel.h"
class Stud : public Chel
{
protected:
	double srBall;
public:
	Stud();
	Stud(int v, std::string s);
	void setSrBall(double srBall);
	double getSrBall();
	/// <summary>
	/// Метод, выводящий всю информацию о студенте
	/// </summary>
	void print();

};

