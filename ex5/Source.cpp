#include <iostream>
using namespace std;

/*Introduir 3 números i a continuació que els escrigui ordenats de major a menor.*/

int	main()
{
	int a, b, c, d;

	cout << "Introdueix el valor del primer número: " << endl;
	cin >> a;
	cout << "Introdueix el valor del segon número: " << endl;
	cin >> b;
	cout << "Introdueix el valor del tercer número: " << endl;
	cin >> c;

	if (a > b && a > c && b > c) {
		cout << a << ", " << b << ", " << c << ", " << endl;
	}
	else {
		if (b > a && b > c && a > c) {
			cout << b << ", " << a << ", " << c << ", " << endl;
		}
		else {
			if (c > b && c > a && b > a) {
				cout << c << ", " << b << ", " << a << ", " << endl;
			}
			else {
				if (a > b && a > c && c > b) {
					cout << a << ", " << c << ", " << b << ", " << endl;
				}
				else {
					if (b > a && c > a && a > b) {
						cout << a << ", " << c << ", " << b << ", " << endl;
					}
					else {
						if (b > a && b > c && c > a) {
							cout << b << ", " << c << ", " << a << ", " << endl;
						}
						else {
							if (c > b && c > a && a > b) {
								cout << c << ", " << a << ", " << b << ", " << endl;
							}
							else {
								if (a == b || b == c || c == a) {
									cout << "Els nombres no poden ser iguals." << endl;
								}
							}
						}
					}
				}
			}
		}
	}

	return 0;
}