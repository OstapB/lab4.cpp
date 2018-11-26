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
	int price;

	Ship() {
		tonnage = 1000;
		name = " Maria";
		number_of_passangers = 50;
		year = 1991;
		capitan = " Jhon White";
		type = " passangers";
		price = 6;
		get();
	}

	Ship(int tonnage, string name, int number_of_passangers, int year, string capitan, string type, int price) {
		tonnage = tonnage;
		name = name;
		number_of_passangers = number_of_passangers;
		year = year;
		capitan = capitan;
		type = type;
		price = price;
	}

	~Ship() {
		cout << "Destructor" << endl;
	}

	void Ship2(int setTonnage, string setName, int setNumber_of_passangers) {
		tonnage = setTonnage;
		name = setName;
		number_of_passangers = setNumber_of_passangers;
		year = 2001;
		capitan = " Ostap";
		type = " big";
		price = 8;
		get();
	}

	void Ship3(int setTonnage, string setName, int setNumber_of_passangers) {
		tonnage = setTonnage;
		name = setName;
		number_of_passangers = setNumber_of_passangers;
		year = 2002;
		capitan = " Sasha";
		type = " small";
		price = 10;
		get();
	}

	void get() {
		cout << "weight: " << tonnage << endl;
		cout << "Name: " << name << endl;
		cout << "Number of passangers: " << number_of_passangers << endl;
		cout << "Year:" << year << endl;
		cout << "Capitan:" << capitan << endl;
		cout << "Type:" << type << endl;
		cout << "Price:" << price << endl;
		cout << "\n" << endl;
	}
};
