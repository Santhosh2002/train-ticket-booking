#include <stdio.h>
#include<stdlib.h>
    
    
    int main()

    {
printf("Total No of Seats----------->>  30 seats");
	printf("\n\nHave A Look At Occupied Seats");
	FILE *ptr = fopen("seatoccupied.txt", "r");
    char a[5];
	int line=0;
	while(fgets(a,5,ptr))
	{
		line ++;
		printf("%c",a);
        printf("inside the loop");
	}
	fclose(ptr);
	printf("\n\n end of prog");


    return 0;
}