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



