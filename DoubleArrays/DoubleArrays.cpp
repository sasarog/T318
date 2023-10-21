#include <iostream>
#include <iomanip>

using namespace std;
/// <summary>
/// Создаёт массив
/// </summary>
/// <param name="strok">Количество строк</param>
/// <param name="stolb">Количество столбцов</param>
/// <returns>Указатель на созданный массив</returns>
int** initializeMas(int strok, int stolb) {
	int** mas = new int* [strok];
	for (int i = 0; i < strok; i++) {
		mas[i] = new int[stolb];
	}
	return mas;
}
void zapolnitRand(int** mas, int strok, int stolb) {
	for (int i = 0; i < strok; i++) {
		for (int j = 0; j < stolb; j++) {
			mas[i][j] = rand() % 100;
		}
	}
}
void printMas(int** mas, int strok, int stolb) {
	for (int i = 0; i < strok; i++) {
		cout << mas[i] << " ";
		for (int j = 0; j < stolb; j++) {
			cout << setw(4) << mas[i][j];
		}
		cout << endl;
	}
	cout << endl;
}
double sumDiag(int** mas, int strok, int stolb) {
	double summ = 0;
	for (int i = 0; i < (strok < stolb?strok:stolb); i++) {
		summ += mas[i][i];
	}
	return summ;
}
double sum1StrkPstlb(int** mas, int strok, int stolb) {
	double summ = 0;
	for (int i = 0; i < stolb; i++) {
		summ += mas[0][i];
	}
	for (int i = 1; i < strok; i++) {
		summ += mas[i][stolb-1];
	}
	return summ;
}
void deleteMas(int** mas, int strok, int stolb) {
	for (int i = 0; i < strok; i++) {
		delete[] mas[i];
	}
	delete[] mas;
}
int main() {
	int strok = 5, stolb = 10;
	int** mas = initializeMas(strok, stolb);
	zapolnitRand(mas, strok, stolb);
	printMas(mas, strok, stolb);
	//cout << sumDiag(mas, strok, stolb);
	cout << sum1StrkPstlb(mas, strok, stolb);

}