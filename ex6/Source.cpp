#include <iostream>
using namespace std;

/*Tenint en compte la següent equació x=10*a/b. Demanar per teclat el valor de
a i b per a calcular el valor de X, tenint en compte que la divisió per cero
donaria un error.*/

int	main()
{
	int a, b, x;

	cout << "Introdueix el valor de A: " << endl;
	cin >> a;
	cout << "Introdueix el valor de B: " << endl;
	cin >> b;

	if (b==0) {
		cout << "No es pot dividir per 0!" << endl;
	}
	else {
		x = 10 * a / b;
		cout << "El valor de x es " << x << "." << endl;
	}

	return 0;
}