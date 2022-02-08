/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  
  int number , i  , sum = 0 ; //declare variables

  printf("Enter a number : ");
  scanf("%d" , &number);
  
  for(i=1 ; i<= number ; ++i) //number times loop
  {
    sum = sum + i; //calcualte sum
  }

  printf("Sum is : %d" , sum );
  
  return 0;
}

