#include "Person.h"
#include <iostream>
#include <string>
using namespace std;

Person::Person() : name(nullptr), age(0), countryName(nullptr) {}
Person::Person(char* n, int a, char* c)
{
	name = n;
	age = a;
	countryName = c;
}
Person::Person(const Person& other, bool shallowcopy)
{
	if (shallowcopy)
	{
		name = other.name;
		age = other.age;
		countryName = other.countryName;
	}
	else
	{
		name = new char[strlen(other.name) + 1];
		strcpy(name, other.name);
		age = other.age;
		countryName = new char[strlen(other.countryName) + 1];
		strcpy(countryName, other.countryName);
	}
}
void Person::setName(const char* Name)
{
	name = new char[strlen(name) + 1];
	strcpy(name, Name);
}
void Person::setAge(int age)
{
	age = age;
}
void Person::setcountryName(const char* country)
{
	name = new char[strlen(country) + 1];
	strcpy(countryName, country);
}
char Person::getName() { return *name; }
int Person::getAge() { return age; }
char Person::getcountry() { return *countryName; }
Person::~Person() { delete[] name; delete[] countryName; }
void Person::display()
{
	cout << "Name: " << name << "Age: " << age << endl;
	cout << "Country: " << countryName << endl;
}
int Person::copareAge(const Person& p1, const Person& p2)
{
	cout << "Comparing age..." << endl;
	if (p1.age>p2.age)
	{
		cout << p1.age << " is older" << endl;
	}
	else if (p1.age < p2.age)
	{
		cout << p2.age << " is older" << endl;
	}
	else
	{
		cout << "Both have same age!" << endl;
	}
}