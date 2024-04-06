#include<iostream>
#include "BinaryTreeClass.h"
using namespace std;

int main() {
	
	BinaryTreeClass eva;
	eva.add(new Rostok(12, 2, "50"));
	eva.add(new Rostok(1, 2, "85"));
	eva.add(new Rostok(2, 2, "70"));
	eva.add(new Rostok(3, 2, "65"));
	eva.add(new Rostok(4, 2, "75"));
	eva.add(new Rostok(5, 2, "87"));
	eva.add(new Rostok(6, 2, "95"));
	eva.add(new Rostok(7, 2, "35"));
	eva.add(new Rostok(8, 2, "20"));
	eva.add(new Rostok(9, 2, "10"));
	eva.add(new Rostok(10, 2, "30"));
	eva.add(new Rostok(11, 2, "40"));
	eva.add(new Rostok(12, 2, "38"));
	eva.add(new Rostok(13, 2, "45"));

	return 0;
}