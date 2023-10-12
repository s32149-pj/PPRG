#include <iostream>
using namespace std;

int main()
{
	int number;

	cout << "Podaj liczbe calkowite ";
	cin >> number;
	if (number == 0) {
		cout << "Wpisales 0" << endl;
	}
	else if (number < 0) {
		cout << "Wpisales liczbe ujemna: " << number << endl;
	}
	else {
		cout << "Wpisales liczbe dodatnia: " << number << endl;
	}
	return 0;
}