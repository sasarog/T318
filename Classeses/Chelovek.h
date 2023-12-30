#pragma once
#include <iostream>
using namespace std;
namespace classes {
	class Chelovek
	{
	//public:	//ѕол€ и методы будут доступны вне класса
	//private://ѕол€ и методы будут доступны только внутри класса
	//protected://ѕол€ и методы будут доступны в дочерних классах
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