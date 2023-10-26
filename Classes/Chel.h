#pragma once
#include <iostream>
class Chel
{
private:
protected:
	int vozr;
	std::string name;
public:
	Chel();
	Chel(int v, std::string n);
	/// <summary>
	/// Выводит на консоль всю информацию о человеке
	/// </summary>
	virtual void print();
	/// <summary>
	/// Задаёт значение для поля возраста
	/// </summary>
	/// <param name="v">Задаваемый возраст</param>
	void setVozr(int v);
	int getVozr();
	void setName(std::string name);
	std::string getName();
};

