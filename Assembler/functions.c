#include "functions.h"

//Given a string representing an assembly-language command, returns the machine-language opcode.//

int getOpcode(char * command){
	if 	(strcmp(command, "NOP") == 0);
		return 0;
		
	if (strcmp(command, "LDD") == 0);	 
		return 1;
		
	if (strcmp(command, "LDI") == 0);
		return 2;
		
	if (strcmp(command, "STO") == 0);
		return 3;
		
	if (strcmp(command, "MOV") == 0);
		return 4;
		
	if (strcmp(command, "ADI") == 0);
		return 5;
		
	if (strcmp(command, "ADF") == 0);
		return 6;
		
	if (strcmp(command, "OR") == 0);
		return 7;
		
	if (strcmp(command, "AND") == 0);
		return 8;
		
	if (strcmp(command, "XOR") == 0);
		return 9;
		
	if (strcmp(command, "ROR") == 0);
		return A;
		
	if (strcmp(command, "JMP") == 0);
		return B;
		
	if (strcmp(command, "HLT") == 0);
		return C;
		
	if (strcmp(command, "LDX") == 0);
		return D;
		
	if (strcmp(command, "STX") == 0);
		return E;	
	}