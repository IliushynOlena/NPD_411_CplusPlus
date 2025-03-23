#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//int start = 1;
	//cin >> start;
	//(time(NULL) --> 1.01.1970
	srand(time(NULL));
	int a;
	a = rand();//0......32767
	cout << a << endl;

	a = rand();
	cout << a << endl;

	a = rand();
	cout << a << endl;

	a = rand()%10;//129%10 --> 0...9
	a = rand()%23;//129%23 --> 0...22
	cout << a << endl;
	////0......x --> a = rand()%x
	for (int i = 0; i < 20; i++)
	{
		a = rand() % 10;//129%10 --> 0...9
		cout << a << " ";
	}
	cout << endl;
	for (int i = 0; i < 20; i++)
	{
		a = rand() % 23;
		cout << a << " ";
	}cout << endl;
	//x ..... y   11 - 16
	// rand()%5 ---> 0....4  --> a = rand()%(y -x ) + x
	for (int i = 0; i < 20; i++)
	{
		a = rand() % 6 + 11;
		cout << a << " ";
	}
	cout << endl;

	for (int i = 0; i < 20; i++)
	{
		a = rand() % 10 -  5;//-5 ... 4 
		cout << a << " ";
	}
	cout << endl;
	for (int i = 0; i < 20; i++)
	{
		a = -20 +  rand() %40;//0....39
		cout << a << " ";
	}
	cout << endl;


	const int size = 10;
	int arr[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
		cout << arr[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	////----------------1---------------
	//const int row = 3;
	//const int col = 4;
	//int matrix[row][col];//empty
	//for (int i = 0; i < row; i++)
	//{
	//	for (int j = 0; j < col; j++)
	//	{
	//		cout << matrix[i][j] << " ";
	//	}
	//	cout << endl;
	//}

	//	//----------------2---------------
	//const int row = 3;
	//const int col = 4;
	//int matrix[row][col] = { {1,2,3,4}, {5,6,7,8},{9,10,11,12} };//empty
	//for (int i = 0; i < row; i++)
	//{
	//	for (int j = 0; j < col; j++)
	//	{
	//		cout << matrix[i][j] << " ";
	//	}
	//	cout << endl;
	//}

	//	//----------------3---------------
	//const int row = 3;
	//const int col = 4;
	//int matrix[row][col] = { 1,2,3,4,5,6,7,8,9,10,11,12};//empty
	//for (int i = 0; i < row; i++)
	//{
	//	for (int j = 0; j < col; j++)
	//	{
	//		cout << matrix[i][j] << " ";
	//	}
	//	cout << endl;
	//}

	//	//----------------4---------------
	//const int row = 3;
	//const int col = 4;
	//int matrix[row][col] = { 1,2,3,4,5,6 };//empty
	//for (int i = 0; i < row; i++)
	//{
	//	for (int j = 0; j < col; j++)
	//	{
	//		cout << matrix[i][j] << " ";
	//	}
	//	cout << endl;
	//}

	//	//----------------5---------------
	//const int row = 3;
	//const int col = 4;
	//int matrix[row][col] = { {1,2},{3,4,5,6} };//empty
	//for (int i = 0; i < row; i++)
	//{
	//	for (int j = 0; j < col; j++)
	//	{
	//		cout << matrix[i][j] << " ";
	//	}
	//	cout << endl;
	//}

		//----------------5---------------
	//Написати програму, яка у двовимірному масиві зна-
	//ходить максимальний елемент кожного рядка.
	const int row = 5;
	const int col = 7;
	int matrix[row][col];
	
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			matrix[i][j] = rand() % 100;
			//matrix[i][j] = rand() % 90 + 10;//10.....99
			//cout << left<< setw(5)<< matrix[i][j] ;
			cout << setw(5)<< matrix[i][j] ;
		}
		cout << endl;
	}
	int max;
	for (int i = 0; i < row; i++)
	{
		max = matrix[i][0];
		for (int j = 0; j < col; j++)
		{
			if (matrix[i][j] > max)
			{
				max = matrix[i][j];
			}
		}
		cout << "Max element in row [" << i << "]  =  " << max << endl;
	}



}
