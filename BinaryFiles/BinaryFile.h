#pragma once
#include <iostream>
#include <fstream>
using namespace std;
class BinaryFile
{
	int position = 0;
	string path;
public:
	BinaryFile();
	BinaryFile(string p);
	template<class T>
	void write(const T& elem); 
	template<class T>
	void writeApp(const T& elem);
	template<class T>
	void read(T& elem);

};

template<class T>
inline void BinaryFile::write(const T& elem)
{
	fstream fs(this->path, ios::out | ios::binary);
	fs.write((char*)&elem, sizeof(elem));
	fs.close();

}

template<class T>
inline void BinaryFile::writeApp(const T& elem)
{
	fstream fs(this->path, ios::out | ios::binary | ios::app);
	fs.write((char*)&elem, sizeof(elem));
	fs.close();
}

template<class T>
inline void BinaryFile::read(T& elem)
{
	fstream fs(this->path, ios::in | ios::binary);
	fs.seekg(this->position);
	fs.read((char*)&elem, sizeof(elem));
	this->position += sizeof(elem);
	fs.close();
}
