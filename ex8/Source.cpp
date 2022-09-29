#include <iostream>
using namespace std;

int	main()
{
	int bas, alt, a, p;
	char in;


	cout << "Introdueix el valor de la base: " << endl;
	cin >> bas;
	cout << "Introdueix el valor de la altura: " << endl;
	cin >> alt;

	cout << "Selecciona quina operacio vols realitzar; A-area o P-perimetre." << endl;
	cin >> in;
	if (in != 'A' && in != 'P') {
		cout << "Has d'introduir A o P." << endl;
	}
	else {
		if (in == 'A') {
			a = bas * alt;
			cout << "L'area del rectangle es de " << a << endl;
		}
		else {
			if (in == 'P') {
				p = 2 * alt + 2 * bas;
				cout << "El perimetre del rectangle es " << p << endl;
			}
		}
	}

	return 0;
}