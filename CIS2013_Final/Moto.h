#pragma once
#include <iostream>
#include <string>
using namespace std;

class Moto {
private:
	string color;
	int year;
	string make;
	string model;

public:
	Moto();
	Moto(string c, int y, string m, string o);
	~Moto();

	void setColor(string);
	string getColor();

	void setYear(int);
	int getYear();

	void setMake(string);
	string getMake();

	void setModel(string);
	string getModel();

	void print();

};
