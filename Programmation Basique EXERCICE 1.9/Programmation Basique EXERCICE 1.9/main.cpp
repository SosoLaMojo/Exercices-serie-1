#include <iostream>

/*EXERCICE 1.9
Cr�er un programme qui �crit � l��cran le texte suivant en respectant la mise en forme et les caract�re sp�ciaux. 
De plus le texte doit �tre mis dans un string avant d��tre affich� � l��cran.*/



int main()
{
	std::cout << "Voici un exercice qui va me rendre ch\x8Avre.\n\
Pour le r\x82ussir je dois utiliser du code ASCII tout en n\x27oubliant pas les retours \x85 la ligne. Bref \n\
\x87\x61 me saoule comme exercice.";

	return EXIT_SUCCESS;
}