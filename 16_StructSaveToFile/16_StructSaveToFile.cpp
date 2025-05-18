#include <iostream>
#include <fstream>
using namespace std;

const char* FILENAME = "D://HumanDataBaseNPD_411.txt";

struct Human
{
    char name[50];
    char surname[50];
    int age;
    void Fill()
    {
        cout << "Enter name : "; cin >> name;
        cout << "Enter surname : "; cin >> surname;
        cout << "Enter age : "; cin >> age;
    }
    void Show()
    {
        cout << "Name : " << name << ". Surname : " << surname << ". Age : " << age << endl;
    }
    void SaveToFile()
    {
        ofstream out(FILENAME, ios_base::app);
        out << name;
        out << ":";
        out << surname;
        out << ":";
        out << age;
        out << "|";
        out.close();
        cout << "Save to file " << endl;
    }
    void FillFromFile(char* nameF, char* surF, int ageF)
    {
        strcpy_s(name, nameF);
        strcpy_s(surname, surF);
        age = ageF;
    }
    void Copy(Human h)
    {
        strcpy_s(name, strlen(h.name) + 1, h.name);
        strcpy_s(surname, strlen(h.surname) + 1, h.surname);
        age = h.age;
    }
};

//void Fill(Human h)
//{
//    cout << "Enter name : "; cin >> h.name;
//    cout << "Enter surname : "; cin >> h.surname;
//    cout << "Enter age : "; cin >> h.age;
//}
void ReadFromFile(Human*& h, int& size)
{
    ifstream in(FILENAME);
    char nameB[255], surB[255], ageB[255];

    while (!in.eof())
    {
        in.getline(nameB, 255, ':');
        if (in.eof())break;
        in.getline(surB, 255, ':');
        in.getline(ageB, 255, '|');
        int age = atoi(ageB);

        Human read;
        read.FillFromFile(nameB, surB, age);

        size++;
        Human* temp = new Human[size];
        for (int i = 0; i < size - 1; i++)
        {
            temp[i].Copy(h[i]);
        }
        temp[size - 1] = read;
        delete[]h;
        h = temp;

    }
}
int main()
{
    
 /*   Human h1;
    h1.Fill();
    h1.Show();
    h1.SaveToFile();

    Human h2;
    h2.Fill();
    h2.Show();
    h2.SaveToFile();
    */

    int size = 0;
    Human* h = new Human[size];
    ReadFromFile(h, size);
    for (int i = 0; i < size; i++)
    {
        h[i].Show();
    }


    delete[]h;
}

