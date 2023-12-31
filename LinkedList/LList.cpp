﻿#include "LList.h"

LList::LList()
{
}

LList::LList(const string& s, int a)
{
	this->data = make_shared<Chel>(s, a);
}

void LList::add(const string& s, int a)
{
	if (this->data == nullptr) {
		this->data = make_shared<Chel>(s, a);
		return;
	}
	if (this->next != nullptr) {
		this->next->add(s, a);
	}
	else {
		this->next = make_shared<LList>(s, a);
	}
}

void LList::prinitAll()
{
	if (this->data != nullptr) {
		this->data->print();
	}
	if (this->next != nullptr) {
		this->next->prinitAll();
	}
}

void LList::deleteLast()
{
	//Если нет второго элемента
	if (this->next == nullptr) {
		//удалаяем данные у головного
		this->data = nullptr;
	}
	//Если следующий есть, но нет следующего после него
	//[this] -> [next] -> nullptr
	if (this->next->next == nullptr) {
		this->next = nullptr;
	}
	//Если есть поле следующего
	//[this] -> [next] -> [next] ..... [next] -> nullptr
	//то просим у следующего удалить последний
	else {
		this->next->deleteLast();
	}
}
shared_ptr<Chel> LList::find(const string& sFind)
{
	//Если данных в списке нет, то и возвращать нечего
	if (this->data == nullptr) {
		return nullptr;
	}
	//Если чел нашёлся, возвращается указатель на него
	if (this->data->name == sFind) {
		return this->data;
	}
	//если чел не тот, которого искали
	else {
		//Если есть следующий в списке
		if (this->next != nullptr) {
			//Проверяется следующий
			this->next->find(sFind);
		}
		//Если дошли до конца списка и не наткнулись на искомого чела
		else {
			//Значит такого чела нет
			return nullptr;
		}
	}

	return nullptr;
}