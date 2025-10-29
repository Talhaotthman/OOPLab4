#pragma once
class Person
{
private:
	char* name;
	int age;
	char* countryName;
public:
	Person();
	Person(char* n, int a, char* c);
	Person(const Person&other, bool shallowcopy);
	void setName(const char* Name);
	void setAge(int age);
	void setcountryName(const char* country);
	char getName();
	int getAge();
	char getcountry();
	~Person();
	void display();
	int copareAge(const Person& p1, const Person& p2);
};

