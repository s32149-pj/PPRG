
#include <iostream>
using namespace std;

int main()
{
    int i, j, n, sum;
    cout << "Wpisz n: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        sum = 0;
        for (j = 1; j <= i; j++)
        {
            sum += j;
            cout << j;
            if (j < i)
            {
                cout << " + ";
            }
        }
        cout << " = " << sum << endl;
    }
    return 0;
}