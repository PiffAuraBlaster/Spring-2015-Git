#include "bcfunctions.h"
#include <stdio.h>

int main(void){
	
	char number_input[100];
	char number_output[100] = {0};
	int original_base, new_base;
	
	printf("Please enter the number you wish to convert: \n");
	scanf("%s", number_input);
 	printf("What base is this number in?: \n");
	scanf("%d", &original_base);
	printf("Please enter the base you which to convert to:\n");
	scanf("%d", &new_base);
	printf("%s\n", from_b10(new_base, to_b10(original_base, number_input), number_output));
}