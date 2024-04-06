#include "BinaryTreeClass.h"

BinaryTreeClass::BinaryTreeClass()
{
}

BinaryTreeClass::BinaryTreeClass(Rostok* elem)
{
	this->data = elem;
}

void BinaryTreeClass::add(Rostok* elem)
{
	//Проверка на то, есть ли в дереве хоть один элемент
	if (this->data == nullptr) {
		//Если элементов нет, то новый элемент заполняется данными
		this->data = elem;
		return;
	}
	//Если элемент уже существует
	//проверяем, значение в нём больше добавляемого или меньше
	//примечание (один из операндов сравнения должен быть статичным)
	if (*elem < this->data) {
		//Если меньше, проверяем есть ли слева элемент
		if (this->left != nullptr) {
			//Если есть, просим добавить в дерево новый элемент уже его
			this->left->add(elem);
		}
		else {
			this->left = new BinaryTreeClass(elem);
		}
	}
	//попадаем в правую ветку
	else {
		if (this->right != nullptr) {
			this->right->add(elem);
		}
		else {
			this->right = new BinaryTreeClass(elem);
		}

	}
}

Rostok* BinaryTreeClass::find(const std::string& name)
{
	//Проверка, есть ли данные вообще
	if (this->data == nullptr) {
		return nullptr;
	}
	//Проверка, нужные данные в этом ли узле
	if (this->data->name == name) {
		return this->data;
	}
	//Проверка на то, искомы данные меньше или больше
	if (name < this->data->name) {
		//Если слева есть узел, просим его поискать данные
		if (this->left != nullptr) {
			this->left->find(name);
		}
		//Если слева никого нет, то и возвращать нечего
		else {
			return nullptr;
		}
	}
	else {
		if (this->right != nullptr) {
			this->right->find(name);
		}
		else {
			return nullptr;
		}
	}

}
