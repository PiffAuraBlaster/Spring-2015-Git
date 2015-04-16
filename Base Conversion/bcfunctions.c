#include "bcfunctions.h"
#include <math.h>
#include <string.h>

// Checks integer to check if its within first 10 integers. If it is a letter it converts it into a number. //
int to_int(char a) {
	int b;
	if (a >= '0' && a <= '9'){
		b = a - '0';
	} else if (a >= 'A' && a <= 'Z'){
		b = 10 + a - 'A';
	}
	return b;
}

char to_char(int c){
	char a;
	if(c < 10){
		c = '0' + c;
	}
	else {
		a = 'A'+ (c-10);
	}
	return a;
}

//Converts input to base 10 b is eqaul to input e is equal to exponent and f is equal to the value.//
int to_b10(int base, char input[100]){
	int b;
	int e;
	int f;
	b = strlen(input) -1;
	e = 0;
	f = 0;
	
	while(b >=0){
		f = f + to_int(input[b]) * pow(base, e);
		b = b - 1;
		e = e + 1;
	}
	return f;
}


// Finally converts the input into the new base spitting it out as the output.//
char* from_b10(int base, int input, char *output){
	int e;
	int f;
	int b;
	e = 32;
	f = input;
	b = 0;
	
	while(e >= 0){
		int d;
		d = floor(f/pow(base, e));
		output[b]=to_char(d);
		f = f - d *pow(base, e);
		++b;
	}
	for(b=0;b<32;++b){
		if(output[0]=='0')
			++output;
	}
	return output;
}