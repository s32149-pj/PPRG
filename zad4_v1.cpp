#include <iostream>
using namespace std;

int main()
{
    double n1, n2, n3;

    cout << "Wpisz trzy liczby: ";
    cin >> n1 >> n2 >> n3;

    if (n1 >= n2) {
        if (n1 >= n3)
            cout << "Najwieksza liczba jest : " << n1 << endl;

        else
            cout << "Najwieksza liczba jest " << n3 << endl;
    }
    else {

        if (n2 >= n3)
            cout << "Najwieksza liczba jest " << n2 << endl;

        else
            cout << "Najwieksza liczba jest " << n3 << endl;

    }


    return 0;

}