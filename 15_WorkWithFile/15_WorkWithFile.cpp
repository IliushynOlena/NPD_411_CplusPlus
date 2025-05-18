#include <iostream>
#include <fstream>
using namespace std;

struct Product
{
    char name[20];
    double price;
    bool isInStock;
};
int main()
{
    //iostream --> cout ... cin
   /* cout << "Hello";
    int a;
    cin >> a;
    cout << a;*/
    //create file
    //open file 
    //write file
    //read file
    //close file 
    ofstream fileOut;
    fileOut.open("Text.txt");
    fileOut << "Hello world";
    fileOut.close();

    char buff[255];
    ifstream fileIn;
    fileIn.open("Texttttttttttt.txt");
    if (!fileIn.is_open())
        cout << "File not found" << endl;
    else
    {
        fileIn >> buff;
        cout << buff << endl;

        fileIn.getline(buff, 255);
        cout << buff << endl;
    }   
    fileIn.close();

    ofstream fOut("File.txt", ios_base::app);
    if (fOut.is_open())
    {
        fOut << "I love C++" << endl;
    }
    fOut.close();

    ifstream fIn("File.txt", ios_base::in);
    if (fIn.is_open())
    {
        while (!fIn.eof())
        {
            fIn.getline(buff, 255); //fIn >> buff;
            cout << buff<<endl;
        }
       
    }
    fIn.close();

    //Binary format
    Product pr{ "Phone",7500.99, true };
    ofstream binarySave("Product.bin", ios_base::out | ios_base::binary);
    binarySave.write((char*)&pr, sizeof(pr));
    binarySave.close();

    Product read;
    ifstream binaryRead("Product.bin", ios_base::in | ios_base::binary);
    binaryRead.read((char*)&read, sizeof(read));
    binaryRead.close();
    cout << read.name << " " << read.price << " " << read.isInStock << endl;

}

