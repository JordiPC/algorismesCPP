#include <iostream>
using namespace std;

int	main()
{
	int a, b, c, x1, x2, r, a2;


	cout << "Introdueix el valor de A: " << endl;
	cin >> a;
	cout << "Introdueix el valor de B: " << endl;
	cin >> b;
	cout << "Introdueix el valor de C: " << endl;
	cin >> c;
	
	r = b * b - 4 * a * c;
	a2 = 2 * a;
	if (r < 0) {
		cout << "L'arrel quadrada no pot ser negativa!" << endl;
	}
	else {
		if (a2 <= 0) {
			cout << "No es pot dividir per 0!" << endl;
		}
		else {
			x1 = (0 + b + sqrt(b * b - 4 * a * c)) / 2 * a;
			x2 = (0 - b + sqrt(b * b - 4 * a * c)) / 2 * a;
			cout << "Els valors de x son: x1=" << x1 << " i x2=" << x2 << endl;
		}
	}

	return 0;
}