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
	/// ������� �� ������� ��� ���������� � ��������
	/// </summary>
	virtual void print();
	/// <summary>
	/// ����� �������� ��� ���� ��������
	/// </summary>
	/// <param name="v">���������� �������</param>
	void setVozr(int v);
	int getVozr();
	void setName(std::string name);
	std::string getName();
};

