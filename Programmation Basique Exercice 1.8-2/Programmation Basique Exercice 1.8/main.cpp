#include <iostream>

/*EXERCICE 1.8
Demander à l’utilisateur de saisir son prénom et son nom et écrire dans la console ses initiale.
Réaliser cet exercice sans utiliser de variable string.
Il faut regarder 2 fonctions de cin:
get()
ignore()
*/

int main()
{
	char first, second;
	std::cout << "Write your full name \n";
	first = std::cin.get();
	std::cin.ignore(256, ' ');
	second = std::cin.get();
	std::cout << "Your initials are \n" << first << second << "\n";


	system("pause");
	return EXIT_SUCCESS;
}

