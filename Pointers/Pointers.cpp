#include <iostream>
#include <conio.h>
#include <process.h>
void abort();

using namespace std;
//���������� ���������
void insertionSort(int* mas, const int SIZE) {

	for (int i = 1; i < SIZE; i++) {
		//���������� �������� �� �����, ������� �����, ���� ����� �� �������� 
		//������, ��� ������
		for (int k = i; mas[k] < mas[k - 1] && k >= 1; k--) {
			//���� ������� ����� ������, ��� ���, ������� �� �������������,
			//������ �� �������
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