#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Wpisz liczbe calkowita: ";
    cin >> number;
    if (number == 0) {
        cout << number << " nie jest ani liczba parzysta ani nieparzysta" << endl;
    }
    else if (number % 2 == 0) {
        cout << number << " jest liczba parzysta." << endl;
    }
    else {
        cout << number << " jest liczba nieparzysta.";
    }
    return 0;
}