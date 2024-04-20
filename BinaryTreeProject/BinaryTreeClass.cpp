#include "BinaryTreeClass.h"

//удаляет листовой элемент
void BinaryTreeClass::deleteListok(BinaryTreeClass* curr, BinaryTreeClass* parent, bool isLeft)
{
	//Если isLeft == true, значит удаляемый листок является левой веткой родителя
	if (isLeft) {
		parent->left = nullptr;

	}
	//Если нет, значит правой веткой
	else {
		parent->right = nullptr;

	}
	delete curr;
}

//Когда удаляемый узел - промежуточный слева от родителя с одним потомком
void BinaryTreeClass::deleteLeft(BinaryTreeClass* curr, BinaryTreeClass* parent)
{
	//В зависимости от того, есть ли у него правый или левый потомок
	//Прописывает родителю соответствующий указатель
	if (curr->left != nullptr) {
		//Если есть левый, переписывает левый
		parent->left = curr->left;
	}
	else {
		//Если есть правый, переписывает правый
		parent->left = curr->right;
	}
	delete curr;
}

//То же, что и функция выше
void BinaryTreeClass::deleteRight(BinaryTreeClass* curr, BinaryTreeClass* parent)
{
	if (curr->right != nullptr) {
		parent->right = curr->right;
	}
	else {
		parent->right = curr->left	;
	}
	delete curr;
}

//Удаление узла с двумя потомками
void BinaryTreeClass::deleteDouble(BinaryTreeClass* curr, BinaryTreeClass* parent)
{
	//Идём вправо и всегда налево
	BinaryTreeClass* tmp = curr->right;
	BinaryTreeClass* tmpParent = curr;

	//Идём, пока не найдём узел, у которого нет левого потомка
	while (tmp->left != nullptr) {
		tmpParent = tmp;
		tmp = tmp->left;
	}
	//Удаляем данные, которые хранятся в удаляемом узле
	delete curr->data;
	//Отправляем в удаляемый узел копию данных из того, у которого нет левого потомка
	curr->data = new Rostok(*tmp->data);
	
	

	//Удаляем тот, у которого нет левого потомка, из которого украли данные
	switch (defNodeType(tmp, tmpParent))
	{
	case nodeType::oba:
		this->deleteDouble(tmp, tmpParent);
		break;
	case nodeType::onlyLeft:
		this->deleteLeft(tmp, tmpParent);
		break;
	case nodeType::onlyRight:
		this->deleteRight(tmp, tmpParent);
		break;
	case nodeType::listokFromLeft:
		this->deleteListok(tmp, tmpParent, true);
		break;
	case nodeType::listokFromRight:
		this->deleteListok(tmp, tmpParent, false);
		break;

	default:
		break;
	}
	

}

nodeType BinaryTreeClass::defNodeType(BinaryTreeClass* node, BinaryTreeClass* parent)
{
	//Если оба потомка есть
	if (node->left != nullptr && node->right != nullptr) {
		return nodeType::oba;
	}
	else {
		//Есть правый
		if (node->left == nullptr && node->right != nullptr) {
			return nodeType::onlyRight;
		}
		else {
			//Есть левый
			if (node->left != nullptr && node->right == nullptr) {
				return nodeType::onlyLeft;
			}
			//нет ни одного
			else {
				if (parent->left == node) {
					return nodeType::listokFromLeft;
				}
				else {
					return nodeType::listokFromRight;
				}
			}
		}
	}
}

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

void BinaryTreeClass::remove(const std::string& name)
{
	BinaryTreeClass* curr = this;
	BinaryTreeClass* parent = nullptr;

	while (curr != nullptr && curr->data->name != name) {
		if (name < this->data->name) {
			parent = curr;
			curr = curr->left;
		}
		else {
			parent = curr;
			curr = curr->right;
		}
	}
	switch (defNodeType(curr, parent))
	{
	case nodeType::oba:
		this->deleteDouble(curr, parent);
		break;
	case nodeType::onlyLeft:
		this->deleteLeft(curr, parent);
		break;
	case nodeType::onlyRight:
		this->deleteRight(curr, parent);
		break;
	case nodeType::listokFromLeft:
		this->deleteListok(curr, parent, true);
		break;
	case nodeType::listokFromRight:
		this->deleteListok(curr, parent, false);
		break;
	
	default:
		break;
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
