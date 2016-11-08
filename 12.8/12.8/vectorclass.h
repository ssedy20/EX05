#pragma once
#include <iostream>
using namespace std;

template <typename T>
class vector
{
private:
	T elements[100];
		int size;
public:
	vector();
	void push_back(T element);
	void pop_back();
	unsigned int size();
	bool empty();
	T at(int index);
	void clear() :
	void swap (vector v2);
};

template<typename T> 
vector<T> ::vector()
{
	vectorSize = 0;
}

template<typename T>
bool vector<T> ::empty()
{
 return	(vectorSize == 0);
}

template<typename T>
T vector<T> ::at(int index)
{
	return elements[index];
}

template<typename T> 
void vector <T> ::push_back(T value)
{
	elements[vectorSize++] = value;
}

template<typename T>
void vector <T> ::pop_back()
{
	return elements[--vectorSize];
}

template<typename T>
unsigned int vector <T> ::size()
{
	return vectorSize;
}

template<typename T>
void vector<T> ::clear()
{
	vectorSize = 0;
}

template<typename T>
void vector<T>::swap(vector v2)
{
	T temp[100];
	int tempSize = v2.size(); 
	for (int i = 0; i < size(); i++)
		temp[i] = v2.at(i);
	
	v2.clear();
	for (int i = 0; i < size(); i++)
		v2.push_back(at(i));

	clear();
	for (int i = 0; i < tempSize; i++)
		push_back(temp[i]);
}