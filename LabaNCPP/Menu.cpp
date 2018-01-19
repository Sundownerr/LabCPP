#include "Menu.h"

using namespace std;

Menu::Menu()
{
	openStartMenu();
}

Menu::~Menu()
{

}

void Menu::openStartMenu()
{
	int n;
	cout << "\nEnter the following numbers to do actions that you want: \n1 - Add new abiturient \n2 - Show current abiturients info \n0 - Close programm" << endl;
	cin >> n;

	if (n == 1)
	{
		Abiturient newAbi;
		ab.push_back(newAbi);

		openStartMenu();
	}

	else if (n == 2)
	{
		for (size_t i = 0; i < ab.size(); i++)
		{
			cout << ab[i] << endl;
		}

		openStartMenu();
	}

	else if (n == 0)
	{
		std::exit(0);
	}	
	
}