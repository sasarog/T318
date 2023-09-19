#include <iostream>
#include <conio.h>
#include <process.h>
void abort();

using namespace std;

//Сортировка выбором
void selectSort(int mas[], const int size) {
	//Проходим весь цикл
	for (int i = 0; i < size; i++) {
		//За индек минимального начально берём итый
		int indexMin = i;
		//Проходим цикл от итого элемента до последнего
		for (int k = i + 1; k < size; k++) {
			//ищем минимальный справа от итого элемент
			if (mas[k] < mas[indexMin]) {
				//Если находим, прописываем индекс на этот элемент
				indexMin = k;
			}
		}
		//Меняем элементы местами
		swap(mas[i], mas[indexMin]);
	}
}
//Сортировка вставками
void insertionSort(int mas[], const int SIZE) {

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
	const int SIZE = 10;
	int mas[SIZE];
	for (int i = 0; i < SIZE; i++) {
		mas[i] = rand() % 10;
		cout << mas[i];
	}




}