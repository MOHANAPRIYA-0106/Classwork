
#include <iostream>	


#include <stdio.h>
using namespace std;

int main()

{
	int num1 = 20;

	float num2= 10.5;

	char num3 = 'A';

	double num4 = 105.123;
	
	char s[20];


	printf("\n %c \n %d \n %f \n %lf \n %s \n", num1, num2, num3, num4,"MP");
	
	scanf("%d%f%lf%s", &num1, &num2, &num4, s);   // %d is used for integer

	//fflush(stdin);						// clear the input buffer

	scanf("%c", &num3);

	printf("num =\n %c \n %d \n f \n %lf \n %s \n", num1, num2, num3, num4,"s");

	return 0;

}



