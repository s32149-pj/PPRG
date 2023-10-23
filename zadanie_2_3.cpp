#include <iostream>
using namespace std;

int main()
{
	int miesiac;
	cout << "Podaj liczbe od 1 do 12." << endl;
	cin >> miesiac;
	switch (miesiac) {
	case 1:
		cout << "Styczen" << endl;
		cout << "Ilosc dni: 31" << endl;
		cout << "Pogoda: pochmurno" << endl;
		break;
	case 2:
		cout << "Luty" << endl;
		cout << "Ilosc dni: 28" << endl;
		cout << "Pogoda: pochmurno" << endl;
		break;
	case 3:
		cout << "Marzec" << endl;
		cout << "Ilosc dni: 31" << endl;
		cout << "Pogoda: pochmurno" << endl;
		break;
	case 4:
		cout << "Kwiecien" << endl;
		cout << "Ilosc dni: 30" << endl;
		cout << "Pogoda: slonecznie" << endl;
		break;
	case 5:
		cout << "Maj" << endl;
		cout << "Ilosc dni: 31" << endl;
		cout << "Pogoda: slonecznie" << endl;
		break;
	case 6:
		cout << "Czerwiec" << endl;
		cout << "Ilosc dni: 30" << endl;
		cout << "Pogoda: slonecznie" << endl;
		break;
	case 7:
		cout << "Lipiec" << endl;
		cout << "Ilosc dni: 31" << endl;
		cout << "Pogoda: slonecznie" << endl;
		break;
	case 8:
		cout << "Sierpien" << endl;
		cout << "Ilosc dni: 31" << endl;
		cout << "Pogoda: slonecznie" << endl;
		break;
	case 9:
		cout << "Wrzesien" << endl;
		cout << "Ilosc dni: 30" << endl;
		cout << "Pogoda: slonecznie" << endl;
		break;
	case 10:
		cout << "Pazdziernik" << endl;
		cout << "Ilosc dni: 31" << endl;
		cout << "Pogoda: pochmurno" << endl;
		break;
	case 11:
		cout << "Listopad" << endl;
		cout << "Ilosc dni: 30" << endl;
		cout << "Pogoda: pochmurno" << endl;
		break;
	case 12:
		cout << "Grudzien" << endl;
		cout << "Ilosc dni: 31" << endl;
		cout << "Pogoda: pochmurno" << endl;
		break;
	default:
		cout << "Liczba spoza zakresu. Podaj liczbe z zakresu od 1 do 12." << endl;
	}
	return 0;
}
