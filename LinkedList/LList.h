#pragma once
#include <iostream>
using namespace std;
struct Chel {
	Chel() {
		this->name = "";
		this->age = 0;
	}
	Chel(const string& s, int a) {
		this->name = s;
		this->age = a;
	}
	string name;
	int age;
	void print() {
		cout << endl
			<< "Name: " << this->name
			<< "  Age: " << this->age
			<< endl;
	}
};
class LList
{
	shared_ptr <LList> next = nullptr;
	shared_ptr<Chel> data = nullptr;
public:
	LList();
	LList(const string& s, int a);
	void add(const string& s, int a);
	void prinitAll();
	void deleteLast();
	shared_ptr<Chel> find(const string& sFind);

};

