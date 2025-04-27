#include <iostream>
using namespace std;

void Test_1()
{
    //Stack
    const int size = 10;
    int arr[size];
}

void Test_2()
{
    int size = 5;
    int* arr = new int[size];
    delete[] arr;
}
int* CreateArr(int size)
{
    int* arr = new int[size];
    return arr;
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
int main()
{
    srand(time(0));
    int size = 10;
    cout << "Enter size : ";
    cin >> size;
    int *arr = CreateArr(size);
    FillArr(arr, size);
    ShowArr(arr, size);


    int a = 10;

    int* pa = new int(12);
    

    int b;
    b = 12;
    int* pb = new int;

    *pb = 11;

    int* pc = nullptr;
    pc = new int(5);

    cout << " pa " << pa << endl;
    cout << " *pa " << *pa << endl;
    cout << " pb " << pb << endl;
    cout << " *pb " << *pb << endl;
    cout << " pc " << pc << endl;
    cout << " *pc " << *pc << endl;
    delete pc;
    pc = new int(100);
    cout << " pc " << pc << endl;
    cout << " *pc " << *pc << endl;

    delete pa;
    delete pb;
    delete pc;
    delete[]arr;
}
