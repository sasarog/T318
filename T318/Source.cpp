#include <iostream>
#include <conio.h>
#include <process.h>
void abort();

using namespace std;

//���������� �������
void selectSort(int mas[], const int size) {
	//�������� ���� ����
	for (int i = 0; i < size; i++) {
		//�� ����� ������������ �������� ���� ����
		int indexMin = i;
		//�������� ���� �� ����� �������� �� ����������
		for (int k = i + 1; k < size; k++) {
			//���� ����������� ������ �� ����� �������
			if (mas[k] < mas[indexMin]) {
				//���� �������, ����������� ������ �� ���� �������
				indexMin = k;
			}
		}
		//������ �������� �������
		swap(mas[i], mas[indexMin]);
	}
}
//���������� ���������
void insertionSort(int mas[], const int SIZE) {

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
	const int SIZE = 10;
	int mas[SIZE];
	for (int i = 0; i < SIZE; i++) {
		mas[i] = rand() % 10;
		cout << mas[i];
	}




}