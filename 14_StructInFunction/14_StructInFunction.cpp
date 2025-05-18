#include <iostream>
using namespace std;

struct Movie
{
	int id;
	char name[50];
	char director[50];
	char genre[50];
	float rating;
	float price;
};
void Show(Movie m)
{
	cout << "Name : " << m.name << endl;
	cout << "Director : " << m.director << endl;
	cout << "Genre : " << m.genre << endl;
	cout << "Rating : " << m.rating << endl;
	cout << "Price : " << m.price << endl;
	cout << endl << "_______________________________" << endl;
}
void SearchByName(Movie movies[], int size, char name[])
{
	for (int i = 0; i < size; i++)
	{
		if (strcmp(movies[i].name, name) == 0)
		{
			Show(movies[i]);
		}
	}
}
void SearchByGenre(Movie movies[], int size, char genre[])
{
	for (int i = 0; i < size; i++)
	{
		if (strcmp(movies[i].genre, genre) == 0)
		{
			Show(movies[i]);
		}
	}
}
void SearchByDirector(Movie movies[], int size, char dir[])
{
	for (int i = 0; i < size; i++)
	{
		if (strcmp(movies[i].director, dir) == 0)
		{
			Show(movies[i]);
		}
	}
}
void MostPopularMovie(Movie movies[], int size, char genre[])
{
	int max = 0;
	int maxIndex = 0;
	for (int i = 0; i < size; i++)
	{
		if (strcmp(movies[i].genre, genre) == 0)
		{
			if (movies[i].rating > max)
			{
				max = movies[i].rating;
				maxIndex = i;
			}
		}
	}
	Show(movies[maxIndex]);
}
int main()
{
	const int size = 5;
	Movie movies[size]{
		{1,"Harry Potter", "Alfonso Cuaron", "Fantasy",3.72,150.49},
		{2,"Spider-Man", "Sam Raine", "Fantasy",4.5,100},
		{3,"Rambo", "Ted", "Detective",3.2,78.55},
		{4,"Venom", "Ruben ", "Action",4.3,170.33},
		{5,"The hungers games", "Gary Ross", "Fantasy",4.8,190.36}
	};
	char name[50];
	int choice;
	//int a, b, c;
	//cin >> a >> b >> c;//5 6 7
	do
	{
		
		cout << "--------------- Menu ----------------" << endl;
		cout << "Show all movies                        [1] " << endl;
		cout << "Search movie by name                   [2] " << endl;
		cout << "Search movie by director               [3] " << endl;
		cout << "Search movie by genre                  [4] " << endl;
		cout << "The most popular film in genre         [5] " << endl;
		cout << "Exit                                   [0] " << endl;
		cin >> choice;
		cin.ignore();
		system("cls");
		switch (choice)
		{
		case 1:
			for (int i = 0; i < size; i++)
			{
				Show(movies[i]);
			}
			break;
		case 2:
			cout << "Enter movie name : ";
			cin.getline(name, 50); //cin >> name;
			SearchByName(movies, size, name);
			break;
		case 3:
			cout << "Enter director name : ";
			cin.getline(name, 50); //cin >> name;
			SearchByDirector(movies, size, name);
			break;
		case 4:
			cout << "Enter movie genre : ";
			cin.getline(name, 50); //cin >> name;
			SearchByGenre(movies, size, name);
			break;
		case 5:
			cout << "Enter movie genre : ";
			cin.getline(name, 50); //cin >> name;
			MostPopularMovie(movies, size, name);
			break;
		case 0:
			cout << "Goodbye" << endl;
			exit(0);
		
		default:
			break;
		}



	} while (choice != 0);




}

