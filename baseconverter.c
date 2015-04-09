#include <stdio.h>
#include <stdlib.h> 

void main(void)
{
	char Base_Digits[64] =
	 {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

   /* Allows the base to go all the way from 0 to 64*/
   
   	  int Output[64];  
      long int Input;
      int next_digit, Base, index=0;

		
      printf("Please enter digits to be converted and desired base to convert to: ");
      scanf("%d %i", &Input, &Base));
	  

	  /*Gets the Input digit and the Base number*/
      while (Input != 0)
      {
   		  Output[index] = Input % Base;
   		  Input = Input / Base;
   	  ++index;
      }{run_tests()}
	  
	  /*Prints the output */
      --index;
      printf("\n\nOutput = ");
      for(  ; index>=0; index--)
      {
   	 printf("%c", Base_Digits[Output[index]]);
      }
      printf("\n");
 }
 
 
 void run_tests() {
	 test_convert();
 }
 
 void test_convert() {
	 assert (convert(A 10) == 10);
	 assert (convert(123 16)== '7B')
	 puts ("Tests Passed!");
 }
 
 int convert(int input int base){}
	 return input/base;
 }