#include "Moto.h"
using namespace std;


int main() {
	Moto Moto;
	char userInput;
	string userString;
	int y;
	bool keepAlive = true;
	cout << "Your motorcycle is a " << endl << Moto.getColor() << endl << Moto.getYear() << endl << Moto.getMake() << endl << Moto.getModel() << endl;

	while (keepAlive == true) {
		cout << "Menu: color (c), year (y), make (m), model (o), print(p), exit (x)." << endl << "Your action: ";
		cin >> userInput;
		if (userInput == 'x') {
			keepAlive = false;
		}
		else {
			switch (userInput)
			{
			case 'c':
				cout << "Set motorcycle color: ";
				cin >> userString;
				Moto.setColor(userString);
				cout << "Your motorcycle is now " << Moto.getColor() << endl;
				break;
			case 'y':
				cout << "Set motorcycle year: ";
				cin >> y;
				Moto.setYear(y);
				cout << "Your motorcycle is now from " << Moto.getYear() << endl;
				break;
			case 'm':
				cout << "Set motorcycle make: ";
				cin >> userString;
				Moto.setMake(userString);
				cout << "Your motorcycle is now a " << Moto.getMake() << endl;
				break;
			case 'o':
				cout << "Set motorcycle model: ";
				cin >> userString;
				Moto.setModel(userString);
				cout << "Your motorcycle is now a " << Moto.getModel() << endl;
				break;
			case 'p':
				cout << "Your motorcycle is a " << endl << Moto.getColor() << endl << Moto.getYear() << endl << Moto.getMake() << endl << Moto.getModel() << endl;
				break;
			default:
				cout << "Try again.";
			}
		}
	}

	return 0;
}