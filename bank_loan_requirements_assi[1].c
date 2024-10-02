// program to implement a bank's requirements for a loan 
#include<stdio.h>
int main () {
int age=28;
float income=21030;

//prompt the user for their age;
printf("%d \n", &age);

//prompt the user for their income;
printf("%f \n", &income);

//mode used to determine the vulnerability of the user;
if(age >=21 && income >=21000) {
printf("Congratulations you qualify for a loan. \n");
} else {
printf("Unfortunately, we are unable to offer you a loan at this time. \n");
}
return 0;
}