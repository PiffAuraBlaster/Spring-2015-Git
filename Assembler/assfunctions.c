#include <stdio.h>

int main(){
	
	FILE *file;
	FILE *file2;
	char mystring[100];
		
	file = fopen("untitled.txt", "r");
	if (file == NULL) perror("Couldn't open file");
	else{
		if (fgets (mystring, 100 , file) != NULL)
			puts(mystring);
	}
	file2 = fopen("untitled2.txt","w");
	fputs(mystring, file2);
	fclose(file);
       return 0;
}