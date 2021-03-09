#include <stdio.h>
int num_seats;
int main()
{
 printf("Enter total number of seats you reserved");
 scanf("%d",&num_seats);
 if(num_seats > 0)
 printf("Succesfully canceled");
 else
 printf("Not found your details Try Again");

 return 0;
}