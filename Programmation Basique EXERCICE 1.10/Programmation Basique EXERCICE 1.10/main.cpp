#include <iostream>
#include <math.h>
#include <stdlib.h> 
#include <time.h>


/*EXERCICE 1.10
Écrire un programme qui demande à l’utilisateur de donner la largeur et hauteur de son champs en kilomètre. 
À partir de ce moment, sélectionner au hasard (rand) un nombre de vache qui sera mis au départ dans le 
champs (chaque vache a besoin de 2.5m2 pour vivre) et le nombre de vache ne doit pas dépasser la limite du champ. 
Il faut écrire dans la console les résultats suivant:
La surface du champ en m2
Le nombre de vache maximum
Le nombre de vache au départ
Le nombre de vache qui peut être rajouter
La surface en m2 restante après avoir mis le nombre maximum de vache (si j’ai 3m2 alors il me reste 0.5m2 à la fin)*/

int main()
{
	srand(time(NULL));
	float Largeur;
	float Hauteur;
	const float VivreVache = 2.5;

	std::cout << "Donner la largeur du champ\n";
	std::cin >> Largeur; // Demande de la taille de la largeur à l'utilisateur
	std::cout << "Donner la hauteur du champ\n";
	std::cin >> Hauteur; // Demande de la taille de la hauteur à l'utilisateur

	int TailleChamp = Largeur * Hauteur * 1000; // La surface du champ en m2
	std::cout << "La surface du champ en m2 est de " << TailleChamp << "\n";
	
	int MaxVache = TailleChamp / VivreVache; // Le nombre de vache maximum
	std::cout << "Le nombre de vache maximum est de " << MaxVache << "\n";
	
	int NbrVache = rand() % MaxVache; // Le nombre de vache au départ
	std::cout << "Nombre de vaches au d\x82part: " << NbrVache << "\n";
	
	int nbrVachesRestantes = MaxVache - NbrVache; // Le nombre de vache qui peut être rajouter
	std::cout << "Nombre de vaches qui peut \x88tre rajouter: " << nbrVachesRestantes << "\n";
	
	int ChampRestant = TailleChamp - (NbrVache * VivreVache); // La surface en m2 restante après avoir mis le nombre maximum de vache
	std::cout << "Surface du champ restant en m2: " << ChampRestant << "\n";

	system ("pause");
	return EXIT_SUCCESS;
}