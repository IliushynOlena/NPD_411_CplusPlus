#include <iostream>
using namespace std;

//int float double char short
//User id login password email
struct User
{
    int id = 1;
    char login[50];
    char password[50];
    char email[50];
};
struct Date
{
    int day;
    int month;
    int year;
    char day_name[20];
    char month_name[20];
};
struct Worker
{
    char name[50];
    char surname[50];
    int age;
    int salary;
    Date birthdate;
    Date hiredate;
};
void Input(Worker &p)
{
    cout << "Enter name : "; cin >> p.name;
    cout << "Enter surname : "; cin >> p.surname;
    cout << "Enter age : "; cin >> p.age;
    cout << "Enter salary : "; cin >> p.salary;
    cout << "Enter birthday day : "; cin >> p.birthdate.day;
    cout << "Enter birthday month : "; cin >> p.birthdate.month;
    cout << "Enter birthday year : "; cin >> p.birthdate.year;
    cout << "Enter hiredate day : "; cin >> p.hiredate.day;
    cout << "Enter hiredate month : "; cin >> p.hiredate.month;
    cout << "Enter hiredate year : "; cin >> p.hiredate.year;
}
void Show(Worker p)
{
    cout << "Name : " << p.name << endl;
    cout << "Surname : " << p.surname << endl;
    cout << "Age : " << p.age << endl;
    cout << "Salary : " << p.salary << endl;
    cout << "Birthadte : " << p.birthdate.day<<"/" << p.birthdate.month 
        << "/" <<p.birthdate.year  << endl;
    cout << "Hiredate : " << p.hiredate.day << "/" << p.hiredate.month
        << "/" << p.hiredate.year << endl;

}
int main()
{
    Worker Nick = { "Nick","Tomson",25,30000,{25,12,2000},{11,5,2020} };
    Show(Nick);
  /*  Input(Nick);
    Show(Nick);*/
    Worker copy;
    copy = Nick;
    Show(copy);

    cout << Nick.name << endl;
    cout << Nick.surname << endl;
    cout << Nick.age << endl;
    Worker* ptr = nullptr;
    ptr = &Nick;
    cout << ptr->name << endl;
    cout << ptr->surname << endl;
    cout << ptr->age << endl;


    int arr[5] = { 1,2,3,4,5 };
    Date date = { 11,5,2025,"Sunday","May" };

    cout << "-------------- Day today -----------------" << endl;
    cout << "Day : " << date.day << endl;
    cout << "Month : " << date.month << endl;
    cout << "Year : " << date.year << endl;
    cout << "Day name : " << date.day_name << endl;
    cout << "Month name : " << date.month_name << endl << endl;

    Date birthdate;
    cout << "Enter birthday day : "; cin >> birthdate.day;
    cout << "Enter birthday month : "; cin >> birthdate.month;
    cout << "Enter birthday year : "; cin >> birthdate.year;
    cout << "Enter birthday day name : "; cin >> birthdate.day_name;
    cout << "Enter birthday month name: "; cin >> birthdate.month_name;
    cout << "-------------- Day today -----------------" << endl;
    cout << "Day : " << birthdate.day << endl;
    cout << "Month : " << birthdate.month << endl;
    cout << "Year : " << birthdate.year << endl;
    cout << "Day name : " << birthdate.day_name << endl;
    cout << "Month name : " << birthdate.month_name << endl;





   /* string name;
    int a = 10;
    User user;
    int arr[5];
    char arr2[5];
    float arr3[6];*/
   
  
   

    


}

