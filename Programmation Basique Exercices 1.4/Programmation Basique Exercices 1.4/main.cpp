#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

/*EXERCICE 1.4
Créer un programme qui demande à l’utilisateur  le rayon d’un cercle et qui donne son air et son périmètre.
Utilisez la valeur de pi de la librairie math.h.
*/


float CalculPerimetre(int rayon, int puissance)
{
	float perimetre = puissance * M_PI * rayon;
	return perimetre;
}
float CalculAire(int rayon)
{
	float aire = (rayon * rayon)* M_PI;
		return aire;
}
int main()
{
	int rayon;
	int puissance = 2;
	
	std::cout << "Quel est le rayon du cercle?";
	std::cin >> rayon;

	float perimetre = CalculPerimetre(rayon, puissance);
	float aire = CalculAire(rayon);

	std::cout << "Voici son p\x82rim\x8Atre " << perimetre;
	std::cout << " et voici son aire " << aire << "\n";

	system("pause");
	return EXIT_SUCCESS;
}