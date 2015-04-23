#include <stdio.h>
#include <stdlib.h>

int main()
{

//Creates file names for the assembly input file, the listing file, and the object file//
	FILE *assembly;
	FILE *listing;
	FILE *object;
	
//Places to store strings for later use.//	
	char listwords[100];
	char objectwords[100];
	
//Open the input file if it exsists, otherwise gives an error message and quits//
	assembly = fopen("lab.asm", "r");
	if (assembly == NULL)
		{perror("File does not exist");
		exit(0);}
	else {
	}
	listing = fopen("lab.lst","w");
	if (listing == NULL) perror("File does not exist");
	object = fopen("lab.obj","w");
       return 0;
}
