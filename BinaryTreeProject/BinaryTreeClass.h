#pragma once
#include<iostream>
struct Rostok {
	Rostok() :stebel(0.0), listki(0), name("") {};
	Rostok(double stebel, int listki, const std::string& name) :
		stebel(stebel), listki(listki), name(name) {};
	std::string name;
	double stebel;
	int listki;
	bool operator<(const Rostok& right)const {
		return
			this->name
			<
			right.name;
	}
	bool operator<( Rostok* right) {
		return
			this->name
			<
			right->name;
	}
};

enum nodeType {
	listokFromRight,
	listokFromLeft,
	onlyLeft,
	onlyRight,
	oba
};
class BinaryTreeClass
{
private:
	void deleteListok(BinaryTreeClass* curr, BinaryTreeClass* parent, bool isLeft);
	void deleteLeft(BinaryTreeClass* curr, BinaryTreeClass* parent);
	void deleteRight(BinaryTreeClass* curr, BinaryTreeClass* parent);
	void deleteDouble(BinaryTreeClass* curr, BinaryTreeClass* parent);
	nodeType defNodeType(BinaryTreeClass* node, BinaryTreeClass* parent);

public:
	BinaryTreeClass();
	BinaryTreeClass(Rostok* elem);
	Rostok* data = nullptr;
	BinaryTreeClass* left = nullptr;
	BinaryTreeClass* right = nullptr;

	void add(Rostok* elem);
	void remove(const std::string& name);
	Rostok* find(const std::string& name);
};

