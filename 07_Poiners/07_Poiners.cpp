#include <iostream>
using namespace std;

void ChangeValue(int a)// 0
{
	a++;
}

void ChangeValue(int* a)// 0x125
{
	(*a)++; 
}
int FindMax(int a, int b, int c)
{
	if (a > b && a > c)
		return a;
	if (b > c && b > a)
		return b;
	return c;
}
int* FindMax(int *a, int *b, int *c)
{
	if (*a > *b && *a > *c)
		return a;
	if (*b >* c && *b > *a)
		return b;
	return c;
}
void FillArr(int *arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		*(arr + i) = rand() % 100;
	}
}
void ShowArr(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout<< *(arr + i) <<" ";
	}
	cout << endl;
}
int* FindMaxArray(int* arr, int size)
{
	int* pmax = arr;
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) > *pmax) {
			pmax = arr + i;
		}
	}
	return  pmax;
}
int main()
{
	const int size = 10;
	int arr[size];
	FillArr(arr, size);
	ShowArr(arr, size);
	int* pMax = FindMaxArray(arr, size);
	cout << "* pmax = " << *pMax << endl;
	*pMax *= 2;
	ShowArr(arr, size);


	int x, y, z;
	cout << "Enter three numbers : ";
	cin >> x >> y >> z;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "z = " << z << endl;
	int max = FindMax(x, y, z);
	cout << "max = " << max << endl;
	max++;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "z = " << z << endl;
	cout << "max = " << max << endl;
	int *pmax = FindMax(&x, &y, &z);
	cout << " *pamx = " << *pmax << endl;
	(*pmax)++;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "z = " << z << endl;
	cout << " *pamx = " << *pmax << endl;


	int a = 0;//address = 0x125
	cout << "a = " << a << endl;
	ChangeValue(a);
	cout << "a = " << a << endl;

	ChangeValue(&a);
	cout << "a = " << a << endl;
	//int a = 5;
	//int b = 10;
	//cout << a << endl;
	//cout << b << endl;

	////pointers 
	//int* pa = &a;
	//int* pb = &b;
	//cout << "address a = "<< pa << endl;
	//cout << "address b = " << pb << endl;
	//cout << "a = "<<  * pa << endl;
	//cout << "b = "<<  * pb << endl;
	//cout << "summa = " << a + b << endl;
	//cout << "summa = " << *pa + *pb << endl;

	//pa = &b;
	//*pa += 2;
	//cout << b << endl;
	//cout << *pa << endl;
	//cout << *pb << endl;

	//srand(time(0));
	//const int size = 10;
	//int arr[size];
	//int* parr = &arr[0];
	// Example 1 
	//for (int i = 0; i < size; i++)
	//{
	//	//arr[i] = rand() % 100;
	//	//cout << arr[i] << " ";
	//	*(parr + i) = rand() % 100;
	//}
	//cout << endl;
	//cout << parr << endl;
	//cout << arr << endl;
	//cout << *parr << endl;
	//cout << *arr << endl;
	//cout << *parr + 1 << endl;
	//cout << *(parr + 1 )<< endl;

	//for (int i = 0; i < size; i++)
	//{
	//	cout << *(parr + i) << " ";
	//}
	//cout << endl;

	/*
	// Example 2 
	for (int i = 0; i < size; i++)
	{
		*parr = rand() % 100;
		parr ++;		
	}
	parr = arr;
	for (int i = 0; i < size; i++)
	{
		cout<< *parr<<" ";
		parr++;
	}
	cout << endl;

	int* newp = arr;
	*newp = 0;
	newp += 3;
	*newp = 0;

	parr = arr;
	for (int i = 0; i < size; i++)
	{
		cout << *parr << " ";
		parr++;
	}
	cout << endl;
	parr--;
	for (int i = 0; i < size; i++)
	{
		cout << *parr << " ";
		parr--;
	}
	cout << endl;
	*/

}

