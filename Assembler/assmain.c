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
	char *line = NULL;
	char read;
	size_t len = 0;
	
//Open the input file if it exsists, otherwise gives an error message and quits//
//Reads each line ignoring comment lines and prints results to screen and listing file//
	assembly = fopen("lab.asm", "r");
	if (assembly == NULL)
		{perror("File does not exist");
		exit(0);}
	else {
		while ((read = getline(&line, &len, assembly)) != -1) {
			printf("%s", line);
		}
	}
	
//Opens the two output files and Prints the header lines of the output files.//
	listing = fopen("lab.lst","w");
	if (listing == NULL) perror("File does not exist");
	else {
		if (fgets (listwords, 100, listing) !=NULL)
			puts(listwords);
	}
	object = fopen("lab.obj","w");
	if (object == NULL) perror("File does not exist");
	else {
		if (fgets (listwords, 100, objectwords) !=NULL)
			puts(objectwords);
	}

	
	
       return 0;
}
