#include <iostream>
using namespace std;

/*.L’ordinador pensa un número entre 1 i 10, l’usuari l’intenta encertar, si és així
mostrar un missatge d’enhorabona en cas contrari indicar que ha fallat.*/

int	main()
{
	int r, in;

	srand(time(NULL));
	r = rand() % 10 + 1;
	cout << "Encerta el numero entre l'1 i el 10: " << endl;
	cin >> in;

	if (in == r) {
		cout << "Enhorabona! Has encertat el numero!" << endl;
	}
	else
	{
		cout << "Aquest no es el numero." << endl;
	}

	return 0;
}