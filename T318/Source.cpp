#include <iostream>

using namespace std;

void selectSort(int mas[], const int size) {
	for (int i = 0; i < size; i++) {
		int indexMin = i;
		for (int k = i; k < size; k++) {
			if (mas[k] < mas[indexMin]) {
				indexMin = k;
			}
		}
		swap(mas[i], mas[indexMin]);
	}
}

int main() {

	const int SIZE = 5;
	int mas[SIZE];
	for (int i = 0; i < SIZE; i++) {
		mas[i] = rand() % 50;
		cout << mas[i];
	}
	for (int i = 0; i < SIZE; i++) {
		int indexMin = i;
		for (int k = i; k < SIZE; k++) {
			if (mas[k] < mas[indexMin]) {
				indexMin = k;
			}
		}
		swap(mas[i], mas[indexMin]);
	}
}