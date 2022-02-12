/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
int minimum(int n1, int n2);
int maximum (int n1, int n2);
int multiply(int n1, int n2);

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}

int minimum(int n1, int n2)
{
  int minimum;
  
  if(n1 > n2)
    minimum = n2;
  else
    minimum = n1;

   return minimum; 
}

int maximum(int n1, int n2)
{
  int maximum;

  if(n1 > n2)
    maximum = n1;
  else
    maximum = n2;

  return maximum;    
}

int multiply(int n1, int n2)
{
  return n1 * n2;
}