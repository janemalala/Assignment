//Program to create a user input c program using structure 
#include<stdio.h>

//Variable declaration 
struct book {
char title [30];
char author [30];
int publication_year;
char ISBN[30];
float price;

};book1;

int main () {
struct book b1;

printf ("\nEnter book details: \n");
printf("Enter title:");
fgets(b1.title, sizeof (b1.title), stdin);

printf("Enter author: ");
fgets (b1.author, sizeof(b1.author), stdin);

printf("Enter publication_year: ");
scanf("%d", &b1.publication_year);

printf("Enter ISBN: ");
scanf("%s", &b1.ISBN);

printf("Enter price: ");
scanf("%f", &b1.price);

//Output 
printf("Display book details: \n");
printf("Title: %s\n", b1.title);
printf("Author: %s\n", b1.author);
printf("Publication Year: %d\n", b1.publication_year);
printf("ISBN: %s\n", b1.ISBN);
printf("Price: %.2f\n", b1.price);

return 0;
}