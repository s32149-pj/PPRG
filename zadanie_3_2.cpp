#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	string z, z_2;
	cout << "Wpisz znak" << endl;
	cin >> z;
	while (z != "t")
	{
		cout << "Wpisz kolejny znak " << endl;
		cin >> z_2;
		z = z_2;
	}

	return(0);
}
