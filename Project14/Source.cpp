//Brandon Heggs
//CIS 1202 501
//November 3, 2022

#include <iostream>

using namespace std;
 
template <typename T>

T half(T value)
{  
	T halved = value/2;

	if (*typeid(value).name() == 'i')
	{

     if (halved * 2 != value)
	{

		halved++;
    }
    }
	return halved;

    }

int main()
{
	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;
	return 0;

}
