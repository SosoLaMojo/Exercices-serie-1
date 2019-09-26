#include <iostream>

/*
EXERCICE 1.6
Écrire un programme qui demande à l’utilisateur de taper 5 entier et qui affiche la moyenne.
*/

int nbNotes = 5;
int note1 = 0;
int note2 = 0;
int note3 = 0;
int note4 = 0;
int note5 = 0;
int somme = 0;
float moyenne = 0;

float CalculMoyenne() // Calcul de la moyenne.
{
	float somme = note1 + note2 + note3 + note4 + note5;
	float moyenne = somme / nbNotes;
	
	return moyenne;
}

int main()
{
	std::cout << "Entrez la premi\x82re note: ";
	std::cin >> note1;
	std::cout << "Entrez la deuxi\x82me note: ";
	std::cin >> note2;
	std::cout << "Entrez la troisi\x82me note: ";
	std::cin >> note3;
	std::cout << "Entrez la quatri\x82me note: ";
	std::cin >> note4;
	std::cout << "Entrez la cinqi\x82me note: ";
	std::cin >> note5;
	std::cout << "Voici la moyenne: " << CalculMoyenne() << "\n";

	system("pause");
	return EXIT_SUCCESS;
}