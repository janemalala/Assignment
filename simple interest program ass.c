// Program to calculate simple interest 
/*
Program to calculate simple interest 
Author:Jane
Date :21/09/2024
*/
// preprocessor scanf(), printf()
#include <stdio.h>
int main () {

int p, t;
float r, si;

printf("1000 \n");
scanf("%f", &p);
printf("5 \n");
scanf("%f", &r);
printf("2 \n");
scanf("%d", &t);

si= (p * t * r)/100;
printf("simple interest is 2.%f\n", si);
 
 return 0;
 }