#include <iostream>
#include "Chel.h"
#include "Stud.h"
using namespace std;

void fun(Chel* a) {
	a->print();
}
int main() {
	try {
		Chel adam(23, "ADAM");
		Stud eva(7, "EVA");
		eva.setVozr(5);
		
	}
	catch (exception e) {
		cout << e.what();
	}
	
}