#include <iostream>
using namespace std;

int main()
{
   /* 
   1. Числові.
   2. Символьні.
   3. Логічні.*/

	/*Змінна — область оперативної пам'яті, що володіє
		власним ім'ям і призначена для зберігання даних, які
		можуть бути змінені.
		*/

	/*Константа — область оперативної пам’яті, що володіє
		власним ім’ям і призначена для зберігання постійних даних.*/
	int a = 5;

	int age = 10;
	cout << age << "\n";
	cout << "Age = " << age << endl;
	int Age = 20;
	int ageOfMan = 25;
	cout << "Age of man : " << ageOfMan << endl;
	int age_of_man = 33;
	int ageofman = 55;

	int a1 = 1;
	int a2 = 2;
	int a3 = 3;
	//int 4a = 4; error
	int a_4 = 4;
	int _b = 3;

	//int float = 3.14; error
	 age = 55;
	 cout << "Age = " << age << endl;

	 const float PI = 3.14;
	 cout << "Pi = " << PI << endl;
	 //PI = 9.86545454; error
		 
	 cout << "Pi = " << PI << endl;


	 float discount = 0.05;
	 int count = 3;
	 cout << "Enter count of product : ";
	 cin >> count;
	 float cost = 14.90;
	 cout << "Enter cost of product : ";
	 cin >> cost;
	 float price;

	 price = cost * count - discount * cost * count;

	 cout << "You have to pay : " << price << endl;
	 int number;
	 cout << "Enter number : ";
	 cin >> number;
	 cout << "Number = " << number << endl;













}

