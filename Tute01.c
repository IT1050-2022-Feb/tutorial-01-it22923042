/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   
   //declare variables
   
   int subject1,subject2;
   float average;
  
   //enter the user inputs
   
   printf("Enter the subject 1 mark :");
   scanf("%d",&subject1);
   printf("Enter the subject 2 mark :");
   scanf("%d",&subject2);
   
   //declare the function
   
   average=(subject1+subject2)/2;
   
   //get the user outputs
   
   printf("this is your average : %.2f",average);
  return 0;
}

