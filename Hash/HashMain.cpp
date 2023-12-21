#include <iostream>
#include <string>
#include "Hash.h"
using namespace std;
string randName() {
	string result = "";
	for (int i = 0; i < 4; i++) {
		result += char(rand() % 26 + 101);
	}
	return result;
}
int main() {
	Hash eva(10);
	eva.add("EVA", 20);
	eva.add("Adam",30);
	eva.add("Kain",15);
	eva.add("Avel",10);
	eva.add("Noah",60);
	eva.print();
	shared_ptr<Chel> a = eva.find("avel");
	a->print();
}