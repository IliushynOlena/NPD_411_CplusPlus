#include <iostream>
using namespace std;

void ChangeValue(int& a)// 0x125
{
    a++;
}

int& MaxElement(int &a, int &b)
{
    if (a > b)return a;//0x256
    else return b;//0x2578
    int c = a; return c;
}
void FillArr(int* arr, int size)
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
        cout << *(arr + i) << " ";
    }
    cout << endl;
}
int& FindMaxArray(int* arr, int size)
{
    int max = arr[0];
    int maxIndex = 0;
    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) > max) {
            max = *(arr + i);//87
            maxIndex = i;//6
        }
    }
    return  arr[maxIndex];//87
}
int main()
{   
    const int size = 10;
    int arr[size];
    FillArr(arr, size);
    ShowArr(arr, size);
    /*int &l_max =  FindMaxArray(arr, size);
    l_max = 0;*/
   FindMaxArray(arr, size) = 0;

    ShowArr(arr, size);

    int a = 15;
    //int* pa = &a;   
    //int* pa;//empty pointer
    int* pa = nullptr;//int* pa = NULL;//int* pa = 0;
    pa = &a;
    cout << a << endl;//Value
   cout << pa << endl;//address
   cout << *pa << endl;//Value
   ChangeValue(a);
   cout << a << endl;//Value
    //Links
    int& la = a;
    int b = 5;
    int& lb = b;
    cout << a + b << endl;
    cout << la + lb << endl;

   int &lmax =  MaxElement(a, b);
   cout << "a = " << a << endl;
   cout << "b = " << b << endl;
   cout << "lmax = " << lmax << endl;
   MaxElement(a, b) = 1;//lmax = 1;
   cout << "a = " << a << endl;
   cout << "b = " << b << endl;
   cout << "lmax = " << lmax << endl;

    





}
