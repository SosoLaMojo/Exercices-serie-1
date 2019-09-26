#include <iostream>

/*
EXERCICE 1.3
DEMANDE DE L'AGE
*/

// EXERCICE 1.0
int main() 
{
	std::cout << "Hello World!\n";

	system("pause");
	

	//EXERCICE 1.1 + 1.2
	
	int age;// Declaration de l'entier age
	std::cout << "Quel \x83ge as-tu?";// Demande de l'age
	std::cin >> age;// Recuperation de l'age
	std::cout << "Congratulation you are " << age << " years old \n";// Affichage de l'age

	system("pause");
	return EXIT_SUCCESS;
}

