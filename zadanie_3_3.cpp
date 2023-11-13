#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double a, b, c, delta,  x_1, x_2;
	cout << "Rownanie kwadaratowe ma postac: ax^2 + bx + c = 0" << endl;
	cout << "Podaj wspolczynniki rownania kwadratowego a, b oraz c: " << endl;
	cin >> a >> b >> c;
	cout << "Twoje rownanie wyglada nastepujaco: " << a << "x^2 + " << b << "x + " << c << " = 0" << endl;
    delta = b * b - (4 * a * c);
    if (delta < 0)
    {
        cout << "Rownanie nie ma rozwiazania";
        return(0);
    }
    if (delta == 0)
    {
        cout << "Rownanie ma jedno rozwiazanie x =  " << -b / (2 * a) << endl;

        return(0);
    }
    delta = sqrt(delta);

    if (delta > 0)
    {
        cout << "Rownanie ma dwa rozwiazania: x_1 =  " << (-b + delta) / (2 * a) << " x_2 = " << (-b - delta) / (2 * a) << endl;
        return(0);
    }

	return(0);
}
