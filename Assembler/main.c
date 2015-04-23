#include <functions.h>
#include <stdio.h>

int main()
{

//Creates file names for the assembly input file, the listing file, and the object file//
	FILE *assembly;
	FILE *listing;
	FILE *object;
	
//Places to store strings for later use.//	
	char listing[100];
	char object[100];
	
//Open the input file if it exsists, otherwise gives an error message and quits//
	assembly = fopen("lab.asm", "r");
	if (assembly == NULL)
		perror("File does not exist");
		fclose(assembly);}	
	else		
	listing = fopen("lab.lst","w");
	if (listing == NULL) perror()
		printf
	object = fopen("lab.obj","w");
       return 0;
}
