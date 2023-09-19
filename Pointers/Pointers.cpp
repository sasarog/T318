#include <iostream>
#include <conio.h>
#include <process.h>
void abort();

using namespace std;
//Сортировка вставками
void insertionSort(int* mas, const int SIZE) {

	for (int i = 1; i < SIZE; i++) {
		//Сравниваем элементы со всеми, которые слева, пока слева не окажется 
		//меньше, чем справа
		for (int k = i; mas[k] < mas[k - 1] && k >= 1; k--) {
			//Если элемент слева больше, чем тот, который мы рассматриваем,
			//Меняем их местами
			swap(mas[k], mas[k - 1]);
		}
	}
}
int main() {
	abort();

	int eva = 5;

	int* karl = &eva;
	cout << *karl << endl;;

	system("pause");

}