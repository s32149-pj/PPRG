#include <iostream>
using namespace std;

int main()
{
    int a, b, i, j;
    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    cout << "Wybrano liczby a == " << a << " oraz b == " << b << endl;
    cout << "Wiersz o dlugosci a: " << endl;
    for (i = 1; i <= a; i++) {
        cout << "*";

    }
    cout << endl;
    cout << "Kolumn o dlugosci b: " << endl;
    for (i = 1; i <= b; i++) {
        cout << "*" << endl;
    }
    cout << endl;
    cout << "Prostokat gwiazdek o wymiarach 'a' na 'b': " << endl;
    for (i = 1; i <= b; i++)
    {
        for (j = 1; j <= a; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Obwod prostokata o wymiarach 'a' na 'b': " << endl;
    for (i = 1; i <= b; i++)
    {
        for (j = 1; j <= a; j++)
        {
            if (i == 1 || i == b || j == 1 || j == a) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
    cout << "Trojkat prostokatny rownoramienny z katem prostym w lewym dolnym rogu: " << endl;

    for (i = 1; i <= a; i++) {
        for (j = 1; j <= i; j++)
            cout << "* ";
        cout << endl;
    }
    cout << endl;
    cout << "Trojkat prostokatny rownoramienny z katem prostym w prawym gornym rogu: " << endl;

    for (i = 1; i <= a; i++) {
        for (j = 1; j < i; j++)
            cout << "  ";
        for (j = 1; j <= a - i + 1; j++)
            cout << "* ";
        cout << endl;
    }

    return 0;
}

