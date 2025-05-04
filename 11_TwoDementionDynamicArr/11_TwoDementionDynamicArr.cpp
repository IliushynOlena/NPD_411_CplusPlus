#include <iostream>
#include <iomanip>
using namespace std;
void Fill(int** arr, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = rand() % 90 + 10;
        }
    }
}
void Show(int** arr, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<< setw(4)<< arr[i][j] <<" ";
        }
        cout << endl;
    }
    cout << endl; cout << endl;
}
void FillRow(int* arr, int col)
{
    for (int i = 0; i < col; i++)
    {
        arr[i] = rand() % 10;
    }
}
int ** AddRow(int** arr, int &row, int col)
{
    int** temp = new int*[row + 1];
    for (int i = 0; i < row; i++)
    {
        temp[i] = arr[i];
    }
    temp[row] = new int[col];
    FillRow(temp[row], col);
    delete[]arr;
    row++;  
    return temp;
}
int** AddRowInPos(int** arr, int& row,int col, int pos)
{
    int** temp = new int*[row + 1];
    for (int i = 0; i < pos; i++)
    {
        temp[i] = arr[i];
    }
    temp[pos] = new int[col];
    FillRow(temp[pos], col);
    for (int i = pos; i < row; i++)
    {
        temp[i + 1] = arr[i];
    }
    delete[]arr;
    row++;
    return temp;
}
int ** AddCol(int** arr, int row, int& col)
{
    int** temp = new int* [row];
    for (int i = 0; i < row; i++)
    {
        temp[i] = new int[col + 1];
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            temp[i][j] = arr[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        delete[]arr[i];
    }
    delete[]arr;
    arr = temp;
    for (int i = 0; i < row; i++)
    {
        arr[i][col] = 7;
    }
    col++;
    return arr;
}
void DeleteRow(int**& arr, int &row)
{
    int** temp = new int* [row - 1];
    for (int i = 0; i < row-1; i++)
    {
        temp[i] = arr[i];
    }
    delete[]arr[row - 1];
    delete[]arr;
    arr = temp;
    row--;
    
}
int main()
{
    int rows = 5;
    int cols = 7;

    int** arr = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }
    //------------------------------------------------
    Fill(arr, rows, cols);
    Show(arr, rows, cols);

    arr = AddRow(arr, rows, cols);
    Show(arr, rows, cols);

    arr = AddRowInPos(arr, rows, cols,2);
    Show(arr, rows, cols);

    arr = AddRowInPos(arr, rows, cols, 4);
    Show(arr, rows, cols);


    arr = AddCol(arr, rows, cols);
    Show(arr, rows, cols);

    DeleteRow(arr, rows);
    Show(arr, rows, cols);

    for (int i = 0; i < rows; i++)
    {
       delete[] arr[i];
    }
    delete[]arr;
}
