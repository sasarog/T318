#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
	//string eva = "1a2345a678a9";
	/*for (int i = 0; i < eva.length(); i++) {
		if (isalpha(eva[i])) {
			cout << "have digit";
		}
	}*/
	//getline(cin, eva);
	//eva.resize(4);
	//eva.clear();
	//eva.append(2,'r');
	//eva.insert(3, "asd");
	//eva.replace(3, 2, "qwerty");
	//cout <<( eva.find('b') != std::string::npos);
	//baa
	//aaa
	//множества
	set<int>adam;
	adam.insert(3);
	adam.insert(4);
	adam.insert(5);
	set<int>eva;
	eva.insert(4);
	eva.insert(5);
	set <int>::iterator it;
	for (it = adam.begin(); it != adam.end(); ++it) {
		if (!eva.count(*it)) {
			cout << *it;
		}
	}
}