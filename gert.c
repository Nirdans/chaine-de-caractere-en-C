#include <stdio.h>
#include <string.h>

/* 
[Fichiers]
	fopen(<fichier>,<mode_ouverture> ) : r (lecture seule, doit exister)			
					     w (ecriture seule )
					     a ( ajout fin fichier)
					     r+ (lecture/ecriture, doit exister)	
					     w+ ( lecteure /ecriture supprime contenu)
					     a+ ( ajoutr lecture / ecriture , fin de fin )
	fclose (<fichier>) : fermer un fichier ouvert
	feof(<fichier>) : tester la fin d'un fichier 

[LECTURE]
	fgetc(<fichier>) : lire un caratere
	fgets  (<chaine>, <fichier>) : lire une ligne
	fscanf (<fichier>, <format>,...) : lire du texte formter

[ECRITURE]
	fputc(<caractere>, <fichier>)	: ecrire un caratere
	fputs (<chaine>,<ficheir>)	: ecrire une ligne de texte
	fprintf(<fichier>,<format>,....): ecrire du texte formater
*/

int main (void)
{

	FILE *fic = ("profil.save","w");
	int position_curseur = -1;
	
	printf("position : %d\n", ftell(fic));
	fseek(fic, 5, SEEK_SET);
	printf("Position : %d\n", ftell(fic));
	
	rewind(fic);
	printf("Position : %d\n", ftell(fic));

fclose(fic);
	
	
return 0;
}