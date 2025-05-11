
#include <iostream>
using namespace std;

int main()
{
    //C-Style rows 
	//string
	char word[] = { 'C','a','t','!','\0'};
	for (int i = 0; i < 4; i++)
	{
		cout << word[i];
	}
	cout << endl;
	char mystring[] = "string";//6 letters + \0
	cout << mystring << " has " << sizeof(mystring) << "characters" << endl;
	cout << "Int : " << sizeof(int) << endl;
	cout << "Double : " << sizeof(double) << endl;
	cout << "Float : " << sizeof(float) << endl;
	cout << "Word : " << sizeof(word) << endl;
	for (int i = 0; i < sizeof(mystring); i++)
	{
		cout << static_cast<int>(mystring[i]) << " ";
	}cout << endl;

	//mystring = "Cat!";
	mystring[1] = 'p';
	/*int arr[] = { 1,2,3,4,5 };
	arr[0] = 7;*/
	cout << mystring << endl;

	char name[15] = "Max";//3 letters + \0
	cout << "My name is : " << name << endl;
	cout << "Max has sizeof() : " << sizeof( name )<< endl;
	cout << "Max has strlen() : " << strlen( name) << endl;



	//char myname[255];
	//cout << "Enter your name : ";
	//cin.getline(myname, 255); //cin >> myname;
	//cout << "You entered  :" << myname << endl;
	char text[] = "Some text!";
	char copy[50];
	strcpy_s(copy, text);
	cout << "Copy : " << copy << endl;

	char arr[255] = "Return the head of a list!";
	cout << arr << endl;
	_strupr_s(arr);
	cout << arr << endl;
	_strlwr_s(arr);
	cout << arr << endl;

	_strrev(arr);
	cout << arr << endl;
	_strrev(arr);
	cout << arr << endl;

	cout << "Copy array : "<<endl;
	char arr2[255] = {};
	strcpy_s(arr2, arr);
	cout << arr2 << endl;
	arr2[6] = '\0';
	cout << arr2 << endl;

	cout << "Add to arr : " << endl;
	strcat_s(arr, ".......");
	cout << arr << endl;
	cout << "Enter some text : ";
	cin >> arr2;
	strcat_s(arr, arr2);
	cout << arr << endl;


}

