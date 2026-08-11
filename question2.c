#include <stdio.h>
int main(){
// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
int a=10, b=2;
int addition= a+b;
int difference= a-b;
int product= a*b;
int quotient= a/b;
printf("addition is : %d\n", addition);
printf("difference is : %d\n", difference);
printf("product is : %d\n", product);
printf("quotient is : %d\n", quotient);
return 0;
}