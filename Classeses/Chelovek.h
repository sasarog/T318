#pragma once
#include <iostream>
using namespace std;
namespace classes {
	class Chelovek
	{
	//public:	//���� � ������ ����� �������� ��� ������
	//private://���� � ������ ����� �������� ������ ������ ������
	//protected://���� � ������ ����� �������� � �������� �������
	private:
		
		string _name;
		double _age;

	public:
		Chelovek();
		void SetName(const string& name);
		string GetName();
		void SetAge(double age);
		double GetAge();
		virtual void Print();

	};
}