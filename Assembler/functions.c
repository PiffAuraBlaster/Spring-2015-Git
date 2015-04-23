#include "functions.h"

//Given a string representing an assembly-language command, returns the machine-language opcode.//

int getOpcode(char * command){
	if 	(strcmp(command, "NOP") == 0);
		return 0;
	else (strcmp(command, "LDD") == 0);	 
		return 1;
	else (strcmp(command, "LDI") == 0);
		return 2;
	else (strcmp(command, "STO") == 0);
		return 3;
	else (strcmp(command, "MOV") == 0);
		return 4;
	else (strcmp(command, "ADI") == 0);
		return 5;
	else (strcmp(command, "ADF") == 0);
		return 6;
	else (strcmp(command, "OR") == 0);
		return 7;
	else (strcmp(command, "AND") == 0);
		return 8;
	else (strcmp(command, "XOR") == 0);
		return 9;
	else (strcmp(command, "ROR") == 0);
		return A;
	else (strcmp(command, "JMP") == 0);
		return B;
	else (strcmp(command, "HLT") == 0);
		return C;
	else (strcmp(command, "LDX") == 0);
		return D;
	else (strcmp(command, "STX") == 0);
		return E;	
	}