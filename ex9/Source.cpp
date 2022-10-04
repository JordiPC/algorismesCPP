#include <iostream>
using namespace std;

/*Donat un caràcter pel teclat indicar si aquest està en majúscules o minúscules,
si no es cap d’aquest mostrar un missatge d’error.*/

int	main()
{
	char in;

	cout << "Introdueix un caracter: " << endl;
	cin >> in;

	if (in > 64 && in < 91) {
		cout << "El caracter introduit es una majustcula." << endl;
	}
	else
	{
		if (in > 94 && in < 123) {
			cout << "El caracter introduit es una minuscula." << endl;
		}
		else
		{
			cout << "ERROR: El caracter introduit no es valid." << endl;
		}
	}

	return 0;
}