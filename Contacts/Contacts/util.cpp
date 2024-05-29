#include "util.h"

void ShowMenu()
{
	cout << "1. Add contact" << endl;
	cout << "2. Show contacts" << endl;
	cout << "3. Search for one contact" << endl;
	cout << "4. Modify one contact" << endl;
	cout << "5. Delete one contact" << endl;
	cout << "6. Delete all contacts" << endl;
	cout << "0. Exit" << endl;
	cout << endl;
}

void AddContact(Contacts* contacts)
{
	if (contacts->count == MAX)
	{
		cout << "The contacts book is full" << endl;
		return;
	}
	else 
	{
		string name;
		cout << "Name: ";
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		getline(cin, name);
		contacts->contacts[contacts->count].name = name;

		char sex;
		cout << "Sex: ";
		cin >> sex;
		contacts->contacts[contacts->count].sex = sex;

		int age;
		cout << "Age: ";
		cin >> age;
		contacts->contacts[contacts->count].age = age;

		string phone;
		cout << "Phone: ";
		cin >> phone;
		contacts->contacts[contacts->count].phone = phone;

		string address;
		cout << "Address: ";
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		getline(cin, address);
		contacts->contacts[contacts->count].address = address;

		cout << "Contact added successfully" << endl;

		contacts->count++;

		system("pause");
		system("cls");
	}
}

void ShowOneContact(contact* contact)
{
	cout << "Name: " << contact->name << "\tSex:" << contact->sex
		<< "\tAge: " << contact->age << "\tPhone: " << contact->phone
		<< "\tAddress: " << contact->address << endl;
}

void ShowContacts(Contacts* contacts)
{
	if (contacts->count == 0)
	{
		cout << "The contacts book is empty" << endl;
	}
	else
	{
		for (int i = 0; i < contacts->count; i++)
		{
			ShowOneContact(&(contacts->contacts[i]));
		}
	}
	system("pause");
	system("cls");
}

void SearchOneContact(Contacts* contacts, string name)
{
	if (contacts->count == 0)
	{
		cout << "The contacts book is empty" << endl;
	}
	else
	{
		for (int i = 0; i < contacts->count; i++)
		{
			if (contacts->contacts[i].name == name)
			{
				ShowOneContact(&(contacts->contacts[i]));
				system("pause");
				system("cls");
				return;
			}
			else {
				continue;
			}
		}
		cout << "The contact is not found" << endl;
	}
	system("pause");
	system("cls");
}

void DeleteOneContact(Contacts* contacts, string name)
{
	if (contacts->count == 0)
	{
		cout << "The contacts book is empty" << endl;
	}
	else
	{
		for (int i = 0; i < contacts->count; i++)
		{
			if (contacts->contacts[i].name == name)
			{
				for (int j = i; j < contacts->count - 1; j++)
				{
					contacts->contacts[j] = contacts->contacts[j + 1];
				}
				contacts->count--;
				cout << "The contact is deleted successfully" << endl;
				system("pause");
				system("cls");
				return;
			}
			else {
				continue;
			}
		}
		cout << "The contact is not found" << endl;
	}
	system("pause");
	system("cls");
}

void ModifyOneContact(Contacts* contacts, string name)
{
	if (contacts->count == 0)
	{
		cout << "The contacts book is empty" << endl;
	}
	else
	{
		for (int i = 0; i < contacts->count; i++)
		{
			if (contacts->contacts[i].name == name)
			{
				char sex;
				cout << "Sex: ";
				cin >> sex;
				contacts->contacts[i].sex = sex;

				int age;
				cout << "Age: ";
				cin >> age;
				contacts->contacts[i].age = age;

				string phone;
				cout << "Phone: ";
				cin >> phone;
				contacts->contacts[i].phone = phone;

				string address;
				cout << "Address: ";
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				getline(cin, address);
				contacts->contacts[i].address = address;
			}
			else {
				continue;
			}
		}
		cout << "The contact is modified successfully" << endl;
	}
	system("pause");
	system("cls");
}

void DeleteAllContacts(Contacts* contacts)
{
	if (contacts->count == 0)
	{
		cout << "The contacts book is empty" << endl;
	}
	else
	{
		contacts->count = 0;
		cout << "All contacts are deleted successfully" << endl;   // 只需要做逻辑清空（让用户访问不到）就可以了，不需要真的删除
	}
	system("pause");
	system("cls");
}