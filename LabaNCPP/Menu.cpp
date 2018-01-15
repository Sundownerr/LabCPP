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

	switch (n)
	{
	case 1:
		break;
	case 2:
		break;
	case 0:
		std::exit(0);
		break;
	}
	
}