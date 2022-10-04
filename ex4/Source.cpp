#include <iostream>
using namespace std;

/*Elaborar un programa que determini en una variable MIN el més petit dels
valors de 4 variables A,B,C,D*/

int	main()
{
	int a, b, c, d;
	
	cout << "Introdueix el valor de A: " << endl;
	cin >> a;
	cout << "Introdueix el valor de B: " << endl;
	cin >> b;
	cout << "Introdueix el valor de C: " << endl;
	cin >> c;
	cout << "Introdueix el valor de D: " << endl;
	cin >> d;

	if (a < b && a < c && a < d) {
		cout << "La variable A és la més petita." << endl;
	}
	else
	{
		if (b < a && b < c && b < d) {
			cout << "La veriable B és la més petita." << endl;
		}
		else {
			if (c < a && c < b && c < d) {
				cout << "La veriable C és la més petita." << endl;
			}
			else {
				cout << "La variable D és la més petita." << endl;
			}
		}
	}

	return 0;
}