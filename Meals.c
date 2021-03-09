#include <stdio.h>


int main()
{
    int water, snacks, lunch, bill;
    printf("YOUR SAFETY IS OUR PRIORITY\nEvery thing will be well sanitizedn and cooked on a neat and clean places\n");
    printf("*Note*: Everything will be served at their respective time so kindly coorporate\n");
    printf("Available meals             Cost (per)\n");
    printf("Mineral Water                Rs. 20/-\n");
    printf("Enter the quantity you need and if none enter 0\n");
    scanf("%d",&water);
    printf("Breakfast/Snacks             Rs. 100/-\n");
    printf("Enter the quantity you need and if none enter 0\n");
    scanf("%d",&snacks);
    printf("Lunch/Dinner                 Rs. 200/-\n");
    printf("Enter the quantity you need and if none enter 0\n");
    scanf("%d",&lunch);
    bill = water*20 + snacks*100 + lunch*200;
    printf("Bill(meals only) = %d", bill );
    
    return 0;
}
