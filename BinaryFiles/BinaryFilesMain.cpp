#include <iostream>
#include "BinaryFile.h"
using namespace std;

struct Chel {
	int age;
	double rost;
	void print() {
		cout << "AGE: " << this->age
			<< "\nRost: " << this->rost << endl;

	}
};
int main() {
	BinaryFile bf("aboba.bin");
	Chel* eva = new Chel[4]{ 
		{ 200,1775.24 }, 
		{ 235,543.9 }, 
		{ 233,34656.5 }, 
		{ 223,534.67 } 
	};
	bf.write(eva[0]);
	for (int i = 1; i < 4; i++) {
		bf.writeApp(eva[i]);
	}
	Chel adam;
	for (int i = 0; i < 4; i++) {
		bf.read(adam);
		adam.print();
	}
	return 0;
}