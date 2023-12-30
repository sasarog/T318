#include "Student.h"
using namespace std;
using namespace classes;

void f(Chelovek* c) {
	c->Print();
}

int main() {
	Student eva;
	eva.SetName("aboba");
	eva.SetAge(20);
	eva.SetSrBall(8.6);
	f(&eva);
	
	return 0;
}