#include <iostream>
using namespace std;

/*Fer el joc de pedra, paper i estisora. Demanar a un primer jugador que vol
estriar la seva figura, demanar a un segon jugador la seva figura i acabar
indicant quin dels dos jugadors ha guanyat o si han empatat.*/

int	main()
{
	int j1, j2;

	cout << "Primer jugador, escolleix el teu primer moviment: 1.Pedra  2.Paper  3.Tisora" << endl;
	cin >> j1;

	cout << "Segon jugador, escolleix el teu primer moviment: 1.Pedra  2.Paper  3.Tisora" << endl;
	cin >> j2;

	if (j1 == 1 && j2 == 3 || j1 == 2 && j2 == 1 || j1 == 3 && j2 == 2) {
		cout << "Ha guanyat el primer jugador!" << endl;
	}
	else
	{
		if (j1 == 1 && j2 == 2 || j1 == 2 && j2 == 3 || j1 == 3 && j2 == 1) { 
			cout << "Ha guanyat el segon jugador!" << endl;
		}
		else
		{
			cout << "Els dos jugadors han empatat!" << endl;
		}
	}

	return 0;
}