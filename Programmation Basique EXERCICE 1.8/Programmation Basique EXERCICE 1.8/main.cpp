#include <iostream>

/*EXERCICE 1.8
Demander � l�utilisateur de saisir son pr�nom et son nom et �crire dans la console ses initiale.
R�aliser cet exercice sans utiliser de variable string.
*/

int main()
{
	const int TailleMax = 20; // Cr�ation de la grille

	char prenom[TailleMax]; // fonction grille pr�nom
	char nom[TailleMax]; //fonction grille nom

	std::cout << "Quel est votre prenom?\n"; //Demande du pr�nom
	std::cin >> prenom; // stockage pr�nom
	std::cout << "Quel est votre nom?\n"; //Demande du nom
	std::cin >> nom; //stockage nom

	std::cout << "Vos initiales sont: " << prenom[0] << nom[0] << "\n"; //Affichage dans la console des initiales

	

	return EXIT_SUCCESS;
}