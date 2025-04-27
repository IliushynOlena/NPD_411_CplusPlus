#include <iostream>
#include <iomanip>
#include <Windows.h>
using namespace std;

void SetColor(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void SetPos(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}


int main()
{
    
   /* for (int i = 0; i < 15; i++)
    {
        SetColor(i);
        cout << "Hello world" << endl;
    }
    SetColor(7);
    Sleep(2000);
    system("cls");
    SetPos(5, 5); cout << "Hello world" << endl;
    cout << "Hello world" << endl;
    cout << "Hello world" << endl;
    SetColor(3); cout << "Hello world" << endl; SetColor(7);
    cout << "Hello world" << endl;
    cout << "Hello world" << endl;*/
    for (int i = 0; i < 100; i++)
    {
        Sleep(500);
        SetPos(rand() % 100, rand() % 50);
        SetColor(rand() % 15);//0...14
        cout << "*";
    }

    /*double x = -5, y = 1.3, z = 3.14;
    cout << setw(5)<< x << endl;
    cout << setw(5) << y << endl;
    cout << setw(5) << z << endl;

    const int row = 5, col = 7;
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = rand() % 100; 
            cout << setw(5) << arr[i][j];
        }
        cout << endl;
    }


    for (int i = 0; i < 256; i++)
    {
        cout << "code = " << i << " symbol [ " << (char)i << " ]" << endl;
    }*/

}

