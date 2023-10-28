#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float x, y;

	cout << "Podaj x: ";
	cin >> x;
	cout << "Podaj y: ";
	cin >> y;
	cout << "Suma lixczb x i y wynosi: " << setprecision(3)  << x+y << endl;
	cout << "Roznica lixczb x i y wynosi: " << x - y << endl;
	cout << "Iloczyn lixczb x i y wynosi: " << x * y << endl;
	cout << "Iloraz lixczb x i y wynosi: " << x / y << endl;

	return 0;
}

