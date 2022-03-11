#include <stdio.h>
#include <string.h>

/* 
[Fonction des chaines]
	strcpy() : copie une chaine dans une autre
	strlen () : longueur d'une chaine 
	strcmp() : comparer deux chaines 

*/

int main (void)
{

	char mot1[] = "jason";
	char mot2[] = "Bateau";
	int test = strcmp(mot1, mot2) ;
	
	if (test == 0)
		printf ("Les deux mots sont les memes."\n);
	else if (test < 0)
		printf ("%s est avant %s\n" , mot1 , mot2 );
	else 
		printf ("%s est avant %s\n", mot1, mot2);
	
return 0;
}