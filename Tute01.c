/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   float mark1 , mark2 , sum , avg; //declarinng variables
   
   printf("Input two numbers : ");
   scanf("%f %f" , &mark1,&mark2);
   
   sum = mark1 + mark2; //find sum
   avg = sum / 2; //find average
   
   printf("Average is : %.2f " , avg ); //print average
   
  return 0;
}

