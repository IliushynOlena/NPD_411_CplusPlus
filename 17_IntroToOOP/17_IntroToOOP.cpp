#include <iostream>
#include <string>
using namespace std;
/*
struct Player
{
    string name;
    short age;
    int games;
    int goals;
};

void printPlayer(Player& pl)
{
    cout << "Name :" << pl.name << endl;
    cout << "Age :" << pl.age << endl;
    cout << "Games :" << pl.games << endl;
    cout << "Goals :" << pl.goals << endl << endl;;
}
void InitPlayer(Player& pl)
{
    cout << "Enter name : "; cin >> pl.name;
    cout << "Enter age : "; cin >> pl.age;
    pl.games = 0;
    pl.goals = 0;
}
void AddGameToPlayer(Player& pl, int goals = 0)
{
    pl.games++;
    pl.goals += goals;
}

*/
//struct Player
//{
//    //public
//    string name;
//    short age;
//    int games;
//    int goals;
//};

class Player
{
private:
    string name;
    short age;
    int games;
    int goals;
public:
    void printPlayer()
    {
        cout << "Name :" << name << endl;
        cout << "Age :" << age << endl;
        cout << "Games :" << games << endl;
        cout << "Goals :" << goals << endl << endl;;
    }
    void InitPlayer()
    {
        cout << "Enter name : "; cin >> name;
        cout << "Enter age : "; cin >> age;
        games = 0;
        goals = 0;
    }
    void AddGameToPlayer( int goals = 0)
    {
        games++;
        this->goals += goals;
    }
};

class FootbalPlayer : public Player
{
    void Test()
    {
        cout << name << endl;
        cout << age << endl;
    }
};

class Student
{
private:
    //data members. змінні-члени класу.
    string name;
    int marks[3];
public:
    //member function. функції-члени класу,методи
    float AverageMark()
    {
        float summa = 0;
        for (int i = 0; i < 3; i++)
        {
            summa += marks[i];
        }
        return summa / 3.0;
    }
    // set
    void setName(string name)
    {
        this->name = name;
    }
    void setMark(int mark, int index)
    {
        if (mark < 1 || mark > 12)
            mark = 0;
        marks[index] = mark;
    }
    // 
    // get
    string getName()
    {
        return name;
    }
    int getMark(int index)
    {
        return marks[index];
    }
};




int main()
{
    FootbalPlayer p;
    p.InitPlayer();
    p.printPlayer();
    Student st1;
    st1.setName("Mukola");
    st1.setMark(12, 0);
    st1.setMark(10, 1);
    st1.setMark(11, 2);

    cout << "Name : " << st1.getName() << ". Marks : " << st1.getMark(0)
        << ", " << st1.getMark(1) << ", " << st1.getMark(2) << endl;
    cout << "Average Mark : " << st1.AverageMark() << endl;


    Student st2;
    st2.setName("Olga");
    st2.setMark(7, 0);
    st2.setMark(8, 1);
    st2.setMark(6, 2);

    cout << "Name : " << st2.getName() << ". Marks : " << st2.getMark(0)
        << ", " << st2.getMark(1) << ", " << st2.getMark(2) << endl;
    cout << "Average Mark : " << st2.AverageMark() << endl;
    /*Player pl;
    pl.InitPlayer();
    pl.printPlayer();

    pl.AddGameToPlayer(0);
    pl.printPlayer();
    pl.AddGameToPlayer(2);
    pl.printPlayer();
    pl.AddGameToPlayer(3);
    pl.printPlayer();*/
   


    // old variant
    /*Player player;
    InitPlayer(player);
    printPlayer(player);

    AddGameToPlayer(player);
    printPlayer(player);

    AddGameToPlayer(player, 2);
    printPlayer(player);

    AddGameToPlayer(player,5);
    printPlayer(player);*/


    //string name;
    //name = "Olena";
    //cout << name << endl;
    //cout << sizeof(name) << endl;
    //cout << "Enter name : ";
    //getline(cin,name); //cin >> name;
    //cout << name << endl;




}

