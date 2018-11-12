#pragma once
#include <iostream>
#include <string>

using namespace std;

class Ship
{
private:
	int tonnage;
	string name;
	int number_of_passangers;
protected:
	int year;
	string capitan;
public:
	string type;
	int value;

	Ship() {
		tonnage = 1000;
		name = " Maria";
		number_of_passangers = 50;
		year = 1991;
		capitan = " Jhon White";
		type = " passangers";
		value = 6;
		get();
	}

	Ship(int ton, string name, int number_of_passangers, int year, string capitan, string type, int value) {
		ton = ton;
		name = name;
		number_of_passangers = number_of_passangers;
		year = year;
		capitan = capitan;
		type = type;
		value = value;
	}

	~Ship() {
		cout << "Destructor" << endl;
	}

	void Ship2(int setTon, string setName, int setNumber_of_passangers) {
		tonnage = setTon;
		name = setName;
		number_of_passangers = setNumber_of_passangers;
		year = 2001;
		capitan = " Ostap";
		type = " big";
		value = 8;
		get();
	}

	void Ship3(int setTon, string setName, int setNumber_of_passangers) {
		tonnage = setTon;
		name = setName;
		number_of_passangers = setNumber_of_passangers;
		year = 2002;
		capitan = " Sasha";
		type = " small";
		value = 10;
		get();
	}

	void get() {
		cout << "weight: " << tonnage << endl;
		cout << "Name: " << name << endl;
		cout << "Number of passangers: " << number_of_passangers << endl;
		cout << "Year:" << year << endl;
		cout << "Capitan:" << capitan << endl;
		cout << "Type:" << type << endl;
		cout << "Value:" << value << endl;
		cout << "\n" << endl;
	}
};