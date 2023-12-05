#include "Hash.h"

int Hash::hash(const string& n)
{
	int positin = 0;
	for (char elem : n) {
		positin += elem; 		
	}
	if (positin >= this->size) {
		positin %= this->size;
	}
	return positin;
}

Hash::Hash()
{
}

Hash::Hash(int size)
{
	this->size = size;
	this->mas = make_shared<LList[]>(size);
}

void Hash::add(const string& n, int a)
{
	mas[
		//������ � �������, ���� ���������� ������ ��������
		this->hash(n)
			//���������� �����, ����������� ������ �������� 
			//� ������� ������� �� i-���� �������
	].add(n, a);
}

shared_ptr<Chel> Hash::find(const string& n)
{
	return mas[this->hash(n)].find(n);
}

void Hash::print()
{
	for (int i = 0; i < this->size; i++) {
		cout << endl
			<< i << ": ";
		mas[i].prinitAll();
	}
}
