#include <iostream>

/*
EXERCICE 1.7
Le programme doit demander � l�utilisateur de rentrer deux entier A et B.
Les valeurs des variables doivent �tre invers� et il faut �crire � la console la valeur de A et B.
*/

int main ()
{
	int A;
	int B;
	std::cout << "Donner la valeur de A\n";
	std::cin >> A;
	std::cout << "Donner la valeur de B\n";
	std::cin >> B;

	int temp = A;
	A = B;
	B = temp;

	std::cout << "Nouvelle valeur A: " << A <<"\n";
	std::cout << "Nouvelle valeur B: " << B << "\n";


	system("pause");
	return EXIT_SUCCESS;
}
