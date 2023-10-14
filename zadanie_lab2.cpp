// ConsoleApplication5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int n1, n2;
	cout << "Wprowadz liczbe kawalkow pizzy: ";
	cin >> n1;
	cout << "Wprowadz liczbe gosci: ";
	cin >> n2;
	if (n2 > n1) {
		cout << "Nie wystarczy, za malo kawalkow" << endl;
	}
	else {
		cout << "Kazdy uczestnik dostanie: " << floor(n1 / n2) << endl;
		cout << "Organizator dostanie: " << n1 - (n2 * floor(n1 / n2)) << endl;
	}
	return 0;
}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
