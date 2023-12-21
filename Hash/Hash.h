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
	/// Добавление элемента
	/// </summary>
	/// <param name="n">Имя нового человека</param>
	/// <param name="a">Возраст нового человека</param>
	void add(const string& n, int a);
	/// <summary>
	/// Поиск чела в хеш-таблице
	/// </summary>
	/// <param name="n">Имя чела</param>
	/// <returns>Указатель на найденного чела</returns>
	shared_ptr<Chel> find(const string& n);
	/// <summary>
	/// Вывод всей хеш-таблицы
	/// </summary>
	void print();

};

