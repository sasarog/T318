#pragma once
#include <iostream>
#include "../LinkedList/LList.h"
using namespace std;

class Hash
{
	int hash(const string& n);
	shared_ptr<LList[]> mas = nullptr;
	int size;
public:
	Hash();
	Hash(int size);
	/// <summary>
	/// ���������� ��������
	/// </summary>
	/// <param name="n">��� ������ ��������</param>
	/// <param name="a">������� ������ ��������</param>
	void add(const string& n, int a);
	/// <summary>
	/// ����� ���� � ���-�������
	/// </summary>
	/// <param name="n">��� ����</param>
	/// <returns>��������� �� ���������� ����</returns>
	shared_ptr<Chel> find(const string& n);
	/// <summary>
	/// ����� ���� ���-�������
	/// </summary>
	void print();

};

