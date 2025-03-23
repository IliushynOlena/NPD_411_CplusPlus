#include <iostream>
using namespace std;

int main()
{
   //while 
   //do while
   //for
	/*
	int i = 10;
	while (i< 10)
	{
		cout << i << " ";
		i++;
	}
	cout << endl; 
	int x = 10;
	do
	{
		cout << x << " ";
		x++;
	} while (x < 10);
	cout << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << i << " ";
	}
	for (int i = 0; i < 10; i++)
	{
		cout << i << " ";
	}
	*/
	int train[3];
	train[0] = 3;
	train[1] = 1;
	train[2] = 4;
	cout << train[0] << endl;
	cout << train[1] << endl;
	cout << train[2] << endl;

	///int arr[250];
	////---------------1 ---------------
	//const int size = 5;
	//int arr[size];//empty 
	//for (int i = 0; i < size; i++)
	//{
	//	cout << arr[i] << " ";
	//}

	////---------------2 ---------------
	//const int size = 5;
	//int arr[size] = {1,2,3,4,5};
	//for (int i = 0; i < size; i++)
	//{
	//	cout << arr[i] << " ";
	//}

	////---------------3 ---------------
	//const int size = 5;
	//int arr[size] = { 1,2,3};
	//for (int i = 0; i < size; i++)
	//{
	//	cout << arr[i] << " ";
	//}
	////---------------4 ---------------
	//const int size = 5;
	//int arr[size] = {};
	//for (int i = 0; i < size; i++)
	//{
	//	cout << arr[i] << " ";
	//}
	//---------------5 ---------------
	/*const int size = 5;
	int arr[size] = {};
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "Enter element in index [" << i << "]";
		cin >> arr[i];
	}
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}*/
	//Написати програму, яка знаходить суму всіх від'ємних значень у масиві.
	//Написати програму, яка знаходить мінімальне й мак -
	//	симальне значення в масиві і виводить їх на екран.
	const int SIZE = 10;
	int ARR[SIZE] = { -5,-4,-8,-9,-7,-3,-21,-4,-6,-1 }; 
	//int ARR[SIZE] = { 5,4,8,9,7,3,21,4,6,1 }; 
	int summa = 0;
	int max = ARR[0];
	int min = ARR[0];
	for (int i = 0; i < SIZE; i++)
	{
		cout << ARR[i] << " ";
		if (ARR[i] < 0)
		{
			summa += ARR[i];
		}
		if (ARR[i] < min)
		{
			min = ARR[i];
		}
		if (ARR[i] > max)
		{
			max = ARR[i];
		}
	}
	cout << endl;
	cout << "Summa negative elements = " << summa << endl;
	cout << "Max element = " << max << endl;
	cout << "Min element = " << min << endl;
	
}

