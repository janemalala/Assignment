//program to calculate compound interest 
/*
program to calculate compound interest 
Author: Jane 
Date: 21/09/2024
*/
//preprocessor scanf(), printf()
#include<stdio.h>
#include<math.h>

int main () {
int p, t;
float r, ci;

printf("4000 \n");
scanf("%f", &p);
printf("10 \n");
scanf("%f", &r);
printf("2 \n");
scanf("%d", &t);

ci= p * pow(  (1 + r /100), t );

printf("compound interest is 2.%f\n", ci);

return 0;
}