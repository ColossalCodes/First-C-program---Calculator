#include <stdio.h>
#include <stdlib.h>

int main() {

	char letter;
	printf("What operation do you want to do?\n\tA)Addition\n\tB)Subtraction\n\tC)Multiplication\n\tD)Division\n");

	scanf_s("%c", &letter); //Take the user input as a char (%c) and put the value in the var letters (&letter)
	
	printf("Please enter 2 numbers:");
	float num1, num2;
	scanf_s("%f", &num1); //Take an input for the first number
	scanf_s("%f", &num2); //Take an input for the second number

		if (letter == 'A' || letter == 'a')
		{
			printf("The sum of %f + %f is %f\n\n", num1,num2, num1+num2);

		}
		else if (letter == 'B' || letter =='b')
		{
			printf("The sum of %f - %f is %f\n\n", num1, num2, num1 - num2);
		}
		else if (letter == 'C' || letter == 'c') 
		{
			printf("The sum of %f x %f is %f\n\n", num1, num2, num1 * num2);
		} 
		else if (letter == 'D' || letter == 'd') 
		{
			printf("The sum of %f divided by %f is %f\n\n", num1, num2, num1 / num2);
		}
	
	return 0;
}