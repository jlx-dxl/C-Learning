#include <iostream>
#include <string>

#define MAX 1000

using namespace std;

void ShowMenu();

struct contact
{
	string name;
	char sex;
	int age;
	string phone;
	string address;
};

struct Contacts
{
	contact contacts[MAX];
	int count = 0;
};

void AddContact(Contacts* Contacts);
void ShowOneContact(contact* contact);
void ShowContacts(Contacts* Contacts);
void SearchOneContact(Contacts* Contacts, string name);
void DeleteOneContact(Contacts* Contacts, string name);
void ModifyOneContact(Contacts* Contacts, string name);
void DeleteAllContacts(Contacts* Contacts);