#include <iostream>

/*EXERCICE 1.8
Demander à l’utilisateur de saisir son prénom et son nom et écrire dans la console ses initiale.
Réaliser cet exercice sans utiliser de variable string.
*/

int main()
{
	const int TailleMax = 20; // Création de la grille

	char prenom[TailleMax]; // fonction grille prénom
	char nom[TailleMax]; //fonction grille nom

	std::cout << "Quel est votre prenom?\n"; //Demande du prénom
	std::cin >> prenom; // stockage prénom
	std::cout << "Quel est votre nom?\n"; //Demande du nom
	std::cin >> nom; //stockage nom

	std::cout << "Vos initiales sont: " << prenom[0] << nom[0] << "\n"; //Affichage dans la console des initiales

	

	return EXIT_SUCCESS;
}