#include <stdio.h>
#include<conio.h>
int main()
{
      double firstNumber, secondNumber, temporaryVariable;
      clrscr();

      printf("Enter first number: ");
      scanf("%lf", &firstNumber);

      printf("Enter second number: ");
      scanf("%lf",&secondNumber);

      
      temporaryVariable = firstNumber;

    
      firstNumber = secondNumber;

      
      secondNumber = temporaryVariable;

      printf("\nAfter swapping, firstNumber = %.2lf\n", firstNumber);
      printf("After swapping, secondNumber = %.2lf", secondNumber);

      getch():
}