#include <iostream>

/*EXERCICE 1.8
Demander � l�utilisateur de saisir son pr�nom et son nom et �crire dans la console ses initiale.
R�aliser cet exercice sans utiliser de variable string.
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

