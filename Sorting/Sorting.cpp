#include <iostream>
using namespace std;

void quickSort(int* mas, int left, int right) {
	if (left >= right) {
		return;
	}
	int pivot = left;
	for (int i = left; i < right; i++) {
		if (mas[i] < mas[left]) {
			swap(mas[i], mas[++pivot]);
			
		}
	}
	swap(mas[left], mas[pivot]);
	
	quickSort(mas, left, pivot-1);
	quickSort(mas, pivot+1, right);
}
int main() {
	const int size = 10;
	int mas[size];
	
	for (int i = 0; i < size; i++) {
		//mas[i] = i + 1;
		mas[i] = rand() % 10;
		cout << "mas[" << i << "] = " << mas[i] << endl;
	}
	
	//сортировка выбором
	for (int i = 0; i < size-1; i++) {
		int imin = i;
		for (int k = i + 1; k < size; k++) {
			if (mas[k] < mas[imin]) {
				imin = k;
			}
		}
		swap(mas[i], mas[imin]);
	}
	//Сортировка вставками
	for (int i = 1; i < size; i++) {
		for (int k = i; k > 0; k--) {
			if (mas[k] < mas[k - 1]) {
				swap(mas[k], mas[k - 1]);
			}
		}
	}
	quickSort(mas, 0, size);
}