#include <iostream>
using namespace std;

struct PIB 
{
	string name;
	string lastname;
	string surname;
};
struct Date
{
	int day;
	int month;
	int year;
};

class Student
{
private:
	PIB fullname;
	Date birthdate;
	string phone;
	string city;
	string country;
	string university;
	string city_university;
	string country_university;
	string group;
	int* marks;
	int countMark;
	float averageMark;
	void setAverageMark()
	{
		float summa = 0;
		for (int i = 0; i < countMark; i++)
		{
			summa += marks[i];
		}
		averageMark = (float)summa / countMark;
	}
public:
	//ctor + TAB
	//default constructor
	Student()
	{
		cout << "default Constructor" << endl;
		fullname.name = "no name";
		fullname.lastname = "no lastname";
		fullname.surname = "no surname";
		birthdate.day = 0;
		birthdate.month = 0;
		birthdate.year = 0;
		phone = "no phone";
		city = "no city";
		country = "no country";
		university = "no university";
		city_university = "no city university";
		country_university = "no country university";
		group = "no group";
		marks = nullptr;
		countMark = 0;
		averageMark = 0;
	}
	Student(string n, string l, string s)
	{
		cout << "Parametrized constructor" << endl;
		fullname.name = n;
		fullname.lastname = l;
		fullname.surname = s;
		birthdate.day = 0;
		birthdate.month = 0;
		birthdate.year = 0;
		phone = "no phone";
		city = "no city";
		country = "no country";
		university = "no university";
		city_university = "no city university";
		country_university = "no country university";
		group = "no group";
		marks = nullptr;
		countMark = 0;
		averageMark = 0;
	}
	Student(string n,string l, string s, Date date)
	{
		cout << "Parametrized constructor" << endl;
		fullname.name = n;
		fullname.lastname = l;
		fullname.surname = s;
		birthdate = date;
		phone = "no phone";
		city = "no city";
		country = "no country";
		university = "no university";
		city_university = "no city university";
		country_university = "no country university";
		group = "no group";
		marks = nullptr;
		countMark = 0;
		averageMark = 0;
	}
	Student(string n, string l, string s, Date date, string p,string city, string country,
		string u, string c_u, string country_u, string g)
	{
	
		cout << "Parametrized constructor" << endl;
		this->fullname.name = n;
		this->fullname.lastname = l;
		this->fullname.surname = s;
		this->birthdate = date;
		this->phone = p;
		this->city = city;
		this->country = country;
		this->university =u;
		this->city_university = c_u;
		this->country_university = country_u;
		this->group =g;
		this->marks = nullptr;
		this->countMark = 0;
		this->averageMark = 0;
	}
	Student(const Student & other)
	{
		cout << "Copy Constructor" << endl;
		this->fullname = other.fullname;  ///Olena ---> Olena
		this->birthdate = other.birthdate; // 15  ---> 15
		this->phone = other.phone;        // +38097564 ---> +38097564
		this->city = other.city;
		this->country = other.country;
		this->university = other.university;
		this->city_university = other.city_university;
		this->country_university = other.country_university;
		this->group = other.group;
		this->countMark = other.countMark;
		//this->marks = other.marks;//0x14788   ---> 0x14788
		this->marks = new int[countMark];
		for (int i = 0; i < countMark; i++)
		{
			this->marks[i] = other.marks[i];
		}
		this->averageMark = other.averageMark;
	}
	void setName(string name)
	{
		fullname.name = name;
	}
	void setLastName(string lastname)
	{
		fullname.lastname = lastname;
	}
	void setSurname(string surname)
	{
		fullname.surname = surname;
	}
	void setDate(Date date)
	{/*
		birthdate.day = date.day;
		birthdate.month = date.month;
		birthdate.year = date.year;*/
		birthdate = date;
	}	
	void AddMark(int mark)
	{
		countMark++;
		int* temp = new int[countMark];
		for (int i = 0; i < countMark-1; i++)
		{
			temp[i] = marks[i];
		}
		temp[countMark - 1] = mark;
		delete[]marks;
		marks = temp;
		setAverageMark();
	}
	void Delete()
	{
		if (marks != nullptr)
			delete[]marks;
	}
	void Initialize()
	{
		fullname.name = "no name";
		fullname.lastname = "no lastname";
		fullname.surname = "no surname";
		birthdate.day = 0;
		birthdate.month = 0;
		birthdate.year = 0;
		phone = "no phone";
		city = "no city";
		country = "no country";
		university = "no university";
		city_university = "no city university";
		country_university = "no country university";
		group = "no group";
		marks = nullptr;
		countMark = 0;
		averageMark = 0;
	}
	void Print()
	{
		cout << "Fullname : " << fullname.name << " " 
			<< fullname.lastname << " " << fullname.surname << endl;
		cout << "Birthdate : " << birthdate.day << "/" << birthdate.month << "/" 
			<< birthdate.year << endl;
		cout << "Phone : " << phone << endl;
		cout << "City : " << city << endl;
		cout << "Country : " << country << endl;
		cout << "university : " << university << endl;
		cout << "City university : " << city_university << endl;
		cout << "Country university : " << country_university << endl;
		cout << "Group : " << group << endl;
		cout << "Marks : ";
		for (int i = 0; i < countMark; i++)
		{
			cout << marks[i] << " ";
		}cout << endl;
		cout << "Average mark : " << averageMark << endl;
	}
	~Student()
	{
		cout << "Desctructor " <<fullname.name << endl;
		if (marks != nullptr)
			delete[]marks;
	}
};

int main()
{
	int a;
	Student stundent;	//default constructor
	//stundent.Initialize();
	stundent.setName("Olga");
	stundent.setLastName("Mukolaivna");
	stundent.setSurname("Ivanchuk");
	stundent.setDate({ 15,12,2000 });
	stundent.AddMark(12);
	stundent.AddMark(7);
	stundent.AddMark(8);
	stundent.AddMark(10);
	stundent.Print();

	cout << "--------------------------------" << endl;
	Student st1("Mukola", "Olegovich", "Popchuk");
	st1.AddMark(12);
	st1.AddMark(12);
	st1.AddMark(12);
	st1.Print();

	cout << "--------------------------------" << endl;
	Student st2("Ira", "Ivanivna", "Muxalchuk", { 12,12,2000 });
	st2.Print();

	cout << "--------------------------------" << endl;
	Student st3("Oleg", "Petrovich", "Ilchuk", { 1,1,2001 }, "+380951478965",
		"Rivne", "Ukraine", "NYVGP", "Rivne", "Ukraine", "PD111");
	st3.AddMark(11);
	st3.AddMark(11);
	st3.AddMark(11);
	st3.Print();

	cout << "-------------- Copy student --------------" << endl;
	Student copy(st3);
	copy.Print();



}

