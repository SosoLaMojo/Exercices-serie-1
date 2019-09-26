#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
/*
EXERCICE 1.5
En reprenant l’exercice 1.4, créer une fonction qui calcul l’air et une autre qui calcul le périmètre.
*/


float CalculerAir(int rayon) // Calcul de l'aire.
{
	float air = 0;
	int SquareRadius = pow(rayon, 2);
	air = 2 * M_PI * SquareRadius;
	return air;
}

float CalculerPerimetre(int rayon) // Calcul du perimètre.
{
	float perimetre = 0;
	perimetre = 2 * M_PI * rayon;
	return perimetre;
}

int main()
{
	int rayon = 0;
	float air = 0;
	float perimetre = 0;

	std::cout << "Quel est le rayon du cercle?";
	std::cin >> rayon;

	std::cout << "Voici son p\x82rim\x8Atre " << CalculerPerimetre(rayon) << " et voici son aire " << CalculerAir(rayon);

	system("pause");
	return EXIT_SUCCESS;
}




