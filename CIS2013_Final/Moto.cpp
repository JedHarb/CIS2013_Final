#include "Moto.h"
using namespace std;

Moto::Moto() : color("blue"), year(2002), make("Yamaha"), model("TW200") {
	//leaving blank
}

Moto::Moto(string c, int y, string m, string o) {
	color = c;
	year = y;
	make = m;
	model = o;
}

Moto::~Moto() {
	//leaving blank
}

void Moto::setColor(string c) {
	color = c;
}
string Moto::getColor() {
	return color;
}

void Moto::setYear(int y) {
	year = y;
}
int Moto::getYear() {
	return year;
}

void Moto::setMake(string m) {
	make = m;
}
string Moto::getMake() {
	return make;
}

void Moto::setModel(string o) {
	model = o;
}
string Moto::getModel() {
	return model;
}

void Moto::print() {
	Moto::getColor();
	Moto::getYear();
	Moto::getMake();
	Moto::getModel();
}
