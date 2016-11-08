#include <iostream>
#include <string>
using namespace std;

template <typename T>
int search(T list[], int key, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (key == list[i])
			return i;
	}
	return -1;
}

int main()
{
	int intArray[] =
	{
		1, 2, 3, 4, 8, 15, 23, 31
	};

	cout << "Linear Search (intArray, 3, 8) is" << search(intArray, 3, 8) << endl;
	cout << "Linear Search (intArray, 10, 8) is " << search(intArray, 10, 8) << endl;
	return 0;
}