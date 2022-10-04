#include <iostream>
using namespace std;

/*MODIFICACIÓ del 11: en cada número introduït indicar si és més gran o més
petit del número que ha indicat l’usuari.*/

int	main()
{
	int r, in, op, ext;
	r = rand() % 10 + 1;
	op = 3;
	ext = 0;

	while (op > 0 && ext != 1) {
		cout << "Encerta el numero entre l'1 i el 10: " << endl;
		cin >> in;
		op = op - 1;

		if (in == r) {
			cout << "Enhorabona! Has encertat el numero!" << endl;
			ext = ext + 1;
		}
		else
		{
			if (in < r) {
				cout << "Es un numero mes gran." << endl;
			}
			else
			{
				if (in > r) {
					cout << "Es un numero mes petit." << endl;
				}
			}
			cout << "Aquest no es el numero, torna a intentar-ho." << endl;
		}
	}
	if (op == 0 && in == r) {
		cout << "S'et han acabat els 3 intents." << endl;
	}

	return 0;
}