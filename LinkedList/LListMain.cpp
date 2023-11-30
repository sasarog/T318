#include <iostream>
#include "LList.h"
using namespace std;

int main() {
	LList eva("EVA", 20);
	eva.add("ADAM", 25);
	eva.add("Kain", 15);
	eva.add("AVEL", 10);
	eva.prinitAll();
}