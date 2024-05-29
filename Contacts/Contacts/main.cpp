#include <iostream>
#include <windows.h>
#include <string>
#include "util.h"

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

	Contacts contactsBook;

	while (true) {

		ShowMenu();

		int option;
		string name;

		cout << "Please input your option: ";

		cin >> option;

		switch (option)
		{
		case 1:
			cout << "Add contact" << endl;
			AddContact(&contactsBook);
			break;
		case 2:
			cout << "Show contacts" << endl;
			ShowContacts(&contactsBook);
			break;
		case 3:
			cout << "Search for one contact" << endl;
			cout << "Please input the name you want to search: ";
			cin >> name;
			SearchOneContact(&contactsBook, name);
			break;
		case 4:
			cout << "Modify one contact" << endl;
			cout << "Please input the name you want to modify: ";
			cin >> name;
			ModifyOneContact(&contactsBook, name);
			break;
		case 5:
			cout << "Delete one contact" << endl;
			cout << "Please input the name you want to delete: ";
			cin >> name;
			DeleteOneContact(&contactsBook, name);
			break;
		case 6:
			cout << "Delete all contacts" << endl;
			DeleteAllContacts(&contactsBook);
			break;
		case 0:
			cout << "Exit" << endl;
			return 0;
		default:
			cout << "Invalid option" << endl;
			break;
		}
	}
}
