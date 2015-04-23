#include <stdio.h>
#include <stdlib.h>
#include "function.h"

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
	int address = 0;
	
//Open the input file if it exsists, otherwise gives an error message and quits//
//Reads each line ignoring comment lines and prints results to screen and listing file//
	assembly = fopen("lab.asm", "r");
	if (assembly == NULL)
		{perror("File does not exist");
		exit(0);}
	else {
		while ((read = getline(&line, &len, assembly)) != -1) {
			printf("%s", line);
		    //if it is a comment line

		          //process as such
		          //print results to screen and listing file; ignore object file

		      //else

		          //get four tokens (some may be bogus; that’s OK)
		          //get the opcode
		          //if invalid, print error message and continue with the next line
		          //switch (opcode)

		              //group1: process command
		              //group2: process command register number
		              //group3: process command register register
		              //group4: process command register register register

		          //assemble final line
		          //print results to screen, listing file, and object file
		          //increment address by 2

	
		}
	}
	
//Opens the two output files and Prints the header lines of the output files.//
	listing = fopen("lab.lst","w");
	if (listing == NULL) perror("File does not exist");
	else {
		fprinf(listing, "%s", listwords);
	}
	object = fopen("lab.obj","w");
	if (object == NULL) perror("File does not exist");
	else {
			fprintf(object, "%s", objectwords);
	}

	
	fclose("lab.asm")
	fclose("lab.lst")
	fclose("lab.obj")
       return 0;
}
