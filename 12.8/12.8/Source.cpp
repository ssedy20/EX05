#include <iostream>
#include "vectorclass.h" 
using namespace std;
//Sarah Sedy HW5 12.8 172.1//
int main()
{ //the test program to add new elements to two different vectors//
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);

	vector<int> v2;
	v2.push_back(3);
	v2.push_back(4);
	v2.push_back(5);
	v2.push_back(6);
	v2.push_back(7);

	v1.swap.(v2);

	for (int i = 0; i < v1.size(); i++)
		cout << v1.at(i) << " ";
}
