 #include <iostream>
#include <string>
using namespace std;
//Sarah Sedy HW5 12.4 172.1//

template <typename T>
bool isSorted(const T list[], int size)
{ //checks to see if elements in the array are sorted//
	for (int i = 0; i < size - 1; i++)
		if (list[i] > list[i + 1])
			return false;
	return true;
}

int main()
{	//following lines of code will check to see if the 3 lists have sorted arrays//
	int list1[] =
	{
		1, 9, 45, 66, 157, 1335
	};

	cout << "Is the array sorted?" << (isSorted(list1, 6) ? "true" : "false") << endl;

	double list[] =
	{
		1, 9, 4.5, 6.6, 5.7, -4.5
	};

	cout << "Is the double array sorted? " << (isSorted(list, 6) ? "true" : "false") << endl;

	string list3[]
	{
		"abc", "abg", "good"
	};

	cout << "Is the string array sorted?" << (isSorted(list3, 3) ? "true" : "false") << endl;
	return 0;
}
