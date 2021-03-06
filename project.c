#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include <time.h>
#include <windows.h>

typedef struct{
	char name[50];
	int train_num;
	int age;
	char gender[20];
	int num_of_seats;
}pd;

void reservation(void);							
void viewdetails(void);							
void cancel(void);								
void printticket(char name[],int num_of_seats,int age,char gender[],int train_num,float charges);
void specifictrain(int);						
float charge(int,int);							
void user_reg();
void user_login();
int i=0;
struct login
{
  char fname[20];
  char lname[20];
  char username[20];
  char passward[20];
};

void main()
{
  int choice;
    system("cls"); 
    system("color 9");
  		
	printf("\t\t=================================================\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|        -----------------------------          |\n");
	printf("\t\t|           TRAIN TICKET RERS. SYSTEM           |\n");
	printf("\t\t|        -----------------------------          |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|           |       DONE BY        |            |\n");
	printf("\t\t|           |     GROUP - 54       |            |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t=================================================\n\n\n");   
	printf("\nPRESS ANY KEY TO CONTINUE:");
	getch();
	printf("\n\nLOADING...........\n\n");
	Sleep(1000);

  		system("cls"); 
	printf("\t\t=================================================\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|        -----------------------------          |\n");
	printf("\t\t|           TRAIN TICKET RERS. SYSTEM           |\n");
	printf("\t\t|        -----------------------------          |\n");
	printf("\t\t|           1. REGISTER YOUR ACCOUNT            |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|           2. LOGIN TO ACCOUNT                 |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|           |       DONE BY        |            |\n");
	printf("\t\t|           |     GROUP - 54       |            |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t=================================================\n\n\n");
    printf("\nENTER YOUR CHOICE: ");
    scanf("%d",&choice);
	printf("\nLOADING...........\n\n");
    Sleep(1000);
  switch (choice)
  {
    case 1 : 
      system("CLS");
      user_reg();
      break;
    case 2 : 
      system("CLS");
      user_login();  
	  break;
	default:
	  printf("\nINVALID CHOICE...");
  }


  return ;
}

void start_page()
{
 	int menu_choice,choice_return;
	start:
		system("cls"); 
	printf("\t\t=================================================\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|        -----------------------------          |\n");
	printf("\t\t|           TRAIN RESERVATION SYSTEM            |\n");
	printf("\t\t|        -----------------------------          |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|        1. RESERVE A TICKET                    |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|        2. CHECK ALL AVAILABLE TRAINS          |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|        3. CANCEL RESERVATION                  |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|        4. CHECK SEAT AVAILABILITY             |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|        5. BOOK YOUR MEALS                     |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|        6.                                     |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t=================================================\n\n\n");

    printf("\nENTER YOUR CHOICE: ");		
	scanf("%d",&menu_choice);
	printf("\nLOADING...........\n\n");
    Sleep(1000);	
	switch(menu_choice)
	{
		case 1:
			reservation();		
			break;
		case 2:
			viewdetails();
			Sleep(1000);
			printf("\n\nPRESS ANY KEY TO GO TO MAIN MENU......");
			getch();
			system("cls"); 
			break;
		case 3:
			cancel();
			break;
		case 4:
			return ;
		default:
			printf("\nINVALID CHOICE..");
	}
	goto start;



}
void user_reg()

{

  char fname[20];
  char lname[20];
  char username[20];
  char passward[20];
    FILE * user_log = fopen("user_data.txt" , "w");
  struct login l ;
  	for(i=0;i<100;i++)
  {
	system("cls"); 

	printf("\t\t=================================================\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|        -----------------------------          |\n");
	printf("\t\t|           TRAIN TICKET RERS. SYSTEM           |\n");
	printf("\t\t|        -----------------------------          |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t| 1. ENTER YOUR FIRST NAME:                     |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t| 2. ENTER YOUR LAST NAME:                      |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t| 3. ENTER YOUR USER NAME:                      |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t| 4. ENTER YOUR PASSWARD:                       |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t=================================================\n\n\n");
	printf("ENTER YOUR DETAILS :\n");
	printf("\n1:\t");scanf("%s",&l.fname);
	printf("\n2:\t");scanf("%s",&l.lname);
	printf("\n3:\t");scanf("%s",&l.username);
	printf("\n4:\t");scanf("%s",&l.passward);
    fwrite(&l,sizeof(l),1,user_log);
    fclose(user_log);
	printf("\nLOADING...........\n");
	Sleep(1000);
  		system("cls"); 
	printf("\t\t=================================================\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|        -----------------------------          |\n");
	printf("\t\t|           TRAIN TICKET RERS. SYSTEM           |\n");
	printf("\t\t|        -----------------------------          |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|   REGISTRATION SUCCESSFUL...........          |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|   YOUR USERNAME IS YOUR USER ID               |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|   NOW LOGIN WITH USER ID AND PASSWARD         |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|   PRESS ANY KEY TO CONTINUE...........        |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t=================================================\n\n\n");
	break;
  }	
    getch();
	
	printf("\nLOADING...........\n\n");
	Sleep(1000);
    system("CLS");
	user_login();
}


void user_login()
{
  char username[200],passward[20];
  FILE * user_log = fopen("user_data.txt" ,"r");
  struct login l ;
   for(i=0;i<100;i++)
  {
    system("cls"); 

	printf("\t\t=================================================\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|        -----------------------------          |\n");
	printf("\t\t|           TRAIN TICKET RERS. SYSTEM           |\n");
	printf("\t\t|        -----------------------------          |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|   1. YOUR USER ID  :                          |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|   2. YOUR PASSWARD :                          |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t=================================================\n\n\n");
	printf("ENTER YOUR DETAILS :\n");		
    printf("\n1: \t");
    scanf("%s",&username);
    printf("\n2: \t");
    scanf("%s",&passward);  
	printf("\nLOADING...........\n");
	Sleep(1000);
  while(fread(&l,sizeof(l),1,user_log))
  {
    if (strcmp(username,l.username)==0 && strcmp(passward,l.passward)==0)
    {
      printf("\nLOGIN SUCCESSFUL.........\n");
	  Sleep(1000);
	  system("cls"); 
	  start_page();

    }
    else
    {
      printf("\nPLEASE ENTER CORRECT USER ID OR PASSWARD\n"); 
	  Sleep(1000);
	  printf("\nPLEASE TRY AGAIN ........\n");
	  Sleep(2000);
	  printf("\nLOADING...........\n\n");
	  Sleep(1000);
	  user_login();

    }
    fclose(user_log);
   }
   break;
  }
  }

void viewdetails(void)
{
	system("cls"); 
<<<<<<< HEAD
	printf("====================================================================================================\n");
	printf("|                                                                                                   \n");
	printf("|                               -----------------------------                                       \n");
	printf("|                                 TRAIN RESERVATION SYSTEM                                          \n");
	printf("|                               -----------------------------                                       \n");
	printf("|                                                                                                   \n");
	printf("|TRAIN 	TRAIN NAME	                      CHARGES          TYPE     RUN DAYS	    D.TIME	A.TIME  \n");
	printf("|                                                                                                   \n");
	printf("|12267  MUMBAI CENTRAL - AHMEDABAD 	      1500 RS          DURONTO	M,T,W,T,F,S,S   23:25   05:55   \n");
	printf("|                                                                                                   \n");
    printf("|12268  AHMEDABAD - MUMBAI CENT           1500 RS          DURONTO  M,T,W,T,F,S,S   23:40   06:00   \n");
	printf("|                                                                                                   \n");
    printf("|22201	KOLKATA SEALDAH - PURI            450  RS          DURONTO	M,W,F           20:00   04:00   \n");
	printf("|                                                                                                   \n");
    printf("|22204	SECUNDERABAD - VISAKHAPATNAM      1700 RS          DURONTO	M,W,S	        20:15	06:35   \n");
	printf("|                                                                                                   \n");
    printf("|22206	MADURAI - CHENNAI CENTRAL         1300 RS          DURONTO	TUE,THU     	22:40	07:20   \n");
	printf("|                                                                                                   \n");
    printf("|12426	JAMMU TAWI - NEW DELHI            600 RS  	       RAJDHANI	M,T,W,T,F,S,S	19:40	05:05   \n");
	printf("|                                                                                                   \n");
    printf("|12430	NEW DELHI - LUCKNOW               1500 RS          RAJDHANI	M,T,F,S	        20:50	06:40   \n");
	printf("|                                                                                                   \n");
    printf("|12437	SECUNDERABAD - HAZRAT NIZAMUDDIN  900 RS           RAJDHANI	WED	            12:45	10:25   \n");
	printf("|                                                                                                   \n");
    printf("|12951	MUMBAI CENTRAL - NEW DELHI        1200 RS   	   RAJDHANI	M,T,W,T,F,S,S	16:35	08:35   \n");
	printf("|                                                                                                   \n");
    printf("|12953	MUMBAI CENT - HAZRAT NIZAMUDDIN   1400 RS          RAJDHANI	M,T,W,T,F,S,S	17:40	10:55   \n");
	printf("|                                                                                                   \n");
	printf("====================================================================================================\n");
=======
	printf("========================================================================================================\n");
	printf("|                                                                                                       \n");
	printf("|                               -----------------------------                                           \n");
	printf("|                                 TRAIN RESERVATION SYSTEM                                              \n");
	printf("|                               -----------------------------                                           \n");
	printf("|                                                                                                       \n");
	printf("|TRAIN 	TRAIN NAME	                                     TYPE	    RUN DAYS    D.TIME	A.TIME  \n");
	printf("|                                                                                                       \n");
	printf("|12267  MUMBAI CENTRAL - AHMEDABAD AC DURONTO EXP	     DURONTO	M,T,W,T,F,S,S   23:25   05:55   \n");
	printf("|                                                                                                       \n");
        printf("|12268  AHMEDABAD - MUMBAI CENT AC DURONTO EXP   	     DURONTO    M,T,W,T,F,S,S   23:40   06:00   \n");
	printf("|                                                                                                       \n");
        printf("|22201	KOLKATA SEALDAH - PURI DURONTO EXPRESS	             DURONTO	M,W,F           20:00   04:00   \n");
	printf("|                                                                                                       \n");
        printf("|22204	SECUNDERABAD - VISAKHAPATNAM AC DURONTO EXPRESS	     DURONTO	M,W,S	        20:15	06:35   \n");
	printf("|                                                                                                       \n");
        printf("|22206	MADURAI - CHENNAI CENTRAL AC DURONTO EXPRESS	     DURONTO	TUE,THU     	22:40	07:20   \n");
	printf("|                                                                                                       \n");
        printf("|12426	JAMMU TAWI - NEW DELHI RAJDHANI EXPRESS	             RAJDHANI	M,T,W,T,F,S,S	19:40	05:05   \n");
	printf("|                                                                                                       \n");
        printf("|12430	NEW DELHI - LUCKNOW AC SF EXPRESS	             RAJDHANI	M,T,F,S	        20:50	06:40   \n");
	printf("|                                                                                                       \n");
        printf("|12437	SECUNDERABAD - HAZRAT NIZAMUDDIN RAJDHANI EXP	     RAJDHANI	WED	        12:45	10:25   \n");
	printf("|                                                                                                       \n");
        printf("|12951	MUMBAI CENTRAL - NEW DELHI RAJDHANI EXPRESS	     RAJDHANI	M,T,W,T,F,S,S	16:35	08:35   \n");
	printf("|                                                                                                       \n");
        printf("|12953	MUMBAI CENT - HAZRAT NIZAMUDDIN KRANTI RAJ EXP	     RAJDHANI	M,T,W,T,F,S,S	17:40	10:55   \n");
	printf("|                                                                                                       \n");
	printf("========================================================================================================\n");
>>>>>>> 86d7b493c03e4648cbed764d7397729671e8fa6b
		
	
}
void reservation(void)
{
	char confirm;
	int i=0;
	float charges;
	pd passdetails;
	FILE *fp;
	fp=fopen("seats_reserved.txt","a");

	system("cls");
	
	printf("\t\t=================================================\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|        -----------------------------          |\n");
	printf("\t\t|           TRAIN TICKET RERS. SYSTEM           |\n");
	printf("\t\t|        -----------------------------          |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t| 1. ENTER YOUR NAME:                           |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t| 2. ENTER NUMBER OF SEATS:                     |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t| 3. ENTER YOUR AGE:                            |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t| 4. ENTER YOUR GENDER:                         |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t| 5. PRESS ENTER TO VIEW AVAILABLE TRAINS:      |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t=================================================\n\n\n");
	fflush(stdin);
    printf("\n1:\t");scanf("%s",&passdetails.name);

	printf("\n2: \t");scanf("%d",&passdetails.num_of_seats);
	
	printf("\n3: \t");scanf("%d",&passdetails.age);

	printf("\n4: \t");scanf("%s",&passdetails.gender);

	printf("\n5: \t");
	getch();
	system("cls");
	viewdetails();
	Sleep(2000);
	printf("\n\n 1. ENTER TRAIN NUMBER:   ");scanf("%d",&passdetails.train_num);
	Sleep(2000);
	start1:
	if(passdetails.train_num==12267)
	{
		charges=charge(passdetails.train_num,passdetails.num_of_seats);
		printticket(passdetails.name,passdetails.num_of_seats,passdetails.age,passdetails.gender,passdetails.train_num,charges);		
	}
	else if(passdetails.train_num==12268)
	{
		charges=charge(passdetails.train_num,passdetails.num_of_seats);
		printticket(passdetails.name,passdetails.num_of_seats,passdetails.age,passdetails.gender,passdetails.train_num,charges);		
	}
	else if(passdetails.train_num==22201)
	{
		charges=charge(passdetails.train_num,passdetails.num_of_seats);
		printticket(passdetails.name,passdetails.num_of_seats,passdetails.age,passdetails.gender,passdetails.train_num,charges);		
	}
	else if(passdetails.train_num==22204)
	{
		charges=charge(passdetails.train_num,passdetails.num_of_seats);
		printticket(passdetails.name,passdetails.num_of_seats,passdetails.age,passdetails.gender,passdetails.train_num,charges);		
	}
	else if(passdetails.train_num==22206)
	{
		charges=charge(passdetails.train_num,passdetails.num_of_seats);
		printticket(passdetails.name,passdetails.num_of_seats,passdetails.age,passdetails.gender,passdetails.train_num,charges);		
	}
	else if(passdetails.train_num==12426)
	{
		charges=charge(passdetails.train_num,passdetails.num_of_seats);
		printticket(passdetails.name,passdetails.num_of_seats,passdetails.age,passdetails.gender,passdetails.train_num,charges);		
	}
	else if(passdetails.train_num==12430)
	{
		charges=charge(passdetails.train_num,passdetails.num_of_seats);
		printticket(passdetails.name,passdetails.num_of_seats,passdetails.age,passdetails.gender,passdetails.train_num,charges);		
	}
	else if(passdetails.train_num==12437)
	{
		charges=charge(passdetails.train_num,passdetails.num_of_seats);
		printticket(passdetails.name,passdetails.num_of_seats,passdetails.age,passdetails.gender,passdetails.train_num,charges);		
	}
	else if(passdetails.train_num==12951)
	{
		charges=charge(passdetails.train_num,passdetails.num_of_seats);
		printticket(passdetails.name,passdetails.num_of_seats,passdetails.age,passdetails.gender,passdetails.train_num,charges);		
	}
	else if(passdetails.train_num==12953)
	{
		charges=charge(passdetails.train_num,passdetails.num_of_seats);
		printticket(passdetails.name,passdetails.num_of_seats,passdetails.age,passdetails.gender,passdetails.train_num,charges);		
	}
	else
	{
		printf("\nINVALID TRAIN NUMBER !\n \n ENTER AGAIN ");
		goto start1;
	}
	
	printf("\n\nCONFIRM TICKET (y/n):");
	
	start:
	scanf(" %c",&confirm);
	printf("\nLOADING...........\n\n");
	Sleep(1000);
	if(confirm == 'y')
	{
		fprintf(fp,"%s\t\t%d\t\t%d\t\t%s\t\t%d\t\t%.2f\n",&passdetails.name,passdetails.num_of_seats,passdetails.age,passdetails.gender,passdetails.train_num,charges);
		Sleep(1000);
		printf("==================");
		printf("\n RESERVATION DONE ....\n");
		printf("==================");
		printf("\nPRESS ANY KEY TO GO BACK TO MAIN MENU..");
	}
	else
	{
		if(confirm=='n'){
			printf("\nRESERVATION NOT DONE!\nPRESS ANY KEY TO GO BACK TO MAIN MENU..!");
		}
		else
		{
			printf("\nINVALID CHOICE ENTERED !\n\n ENTER AGAIN.. ");
			goto start;
		}
	}
	fclose(fp);
	getch();
}

/*********************************************TRAIN CHARGE()*************************************************/

float charge(int train_num,int num_of_seats)
{
		if (train_num==12267)
	{
		return(1500.0*num_of_seats);
	}
	if (train_num==12268)
	{
		return(1500.0*num_of_seats);
	}
	if (train_num==22201)
	{
		return(450.0*num_of_seats);
	}
	if (train_num==22204)
	{
		return(1700.0*num_of_seats);
	}
	if (train_num==22206)
	{
		return(1300.0*num_of_seats);
	}
	if (train_num==12426)
	{
		return(600.0*num_of_seats);
	}
	if (train_num==12430)
	{
		return(1500.0*num_of_seats);
	}
	if (train_num==12437)
	{
		return(900.0*num_of_seats);
	}
	if (train_num==12951)
	{
		return(1200.0*num_of_seats);
	}
	if (train_num==12953)
	{
		return(1400.0*num_of_seats);
	}
}


/*********************************************PRINTTICKET()*************************************************/

void printticket(char name[],int num_of_seats,int age,char gender[],int train_num,float charges)
{
	system("cls");
		printf("\t\t============================================================\n");
	printf("\t\t|                                                              |\n");
	printf("\t\t|        -----------------------------                         |\n");
	printf("\t\t|           TRAIN TICKET RERS. SYSTEM                          |\n");
	printf("\t\t|        -----------------------------                         |\n");
	printf("\t\t|                                                              |\n");
	printf("\t\t| TICKET                                                       |\n");
	printf("\t\t|                                                              |\n");
	printf("\t\t| 1.NAME           : %s                                         \n",name);
	printf("\t\t|                                                               \n");
	printf("\t\t| 2.NUMBER OF SEATS: %d                                         \n",num_of_seats);
	printf("\t\t|                                                               \n");
	printf("\t\t| 1.AGE            : %d                                         \n",age);
	printf("\t\t|                                                               \n");
	printf("\t\t| 2.GENDER         : %s                                         \n",gender);
	printf("\t\t|                                                               \n");
	printf("\t\t| 3.TRAIN NUMBER   : %d                                         \n",train_num);
	printf("\t\t|                                                              |\n");
	specifictrain(train_num);
	printf("\t\t| 7.CHARGES        : %.2f                                   |\n",charges);
	printf("\t\t================================================================\n\n\n");
}

/*********************************************SPECIFICTRAIN()*************************************************/

void specifictrain(int train_num)
{
	
	if (train_num==12267)
	{	printf("\t\t| 4.TRAIN          : MUMBAI CENTRAL - AHMEDABAD AC DURONTO EXP |\n");
	    printf("\t\t| 5.DESTINATION    : MUMBAI CENTRAL TO AHMEDABAD               |\n");
	    printf("\t\t| 6.DEPARTURE TIME : 23:25                                     |\n");
		
	}
	if (train_num==12268)
	{
		printf("\t\t| 4.TRAIN          : AHMEDABAD - MUMBAI CENT AC DURONTO EXP    |\n");
	    printf("\t\t| 5.DESTINATION    : AHMEDABAD TO MUMBAI CENTRAL               |\n");
	    printf("\t\t| 6.DEPARTURE TIME : 23:40                                     |\n");
	}
	if (train_num==22201)
	{
		printf("\t\t| 4.TRAIN          : KOLKATA SEALDAH - PURI DURONTO EXPRESS    |\n");
	    printf("\t\t| 5.DESTINATION    : KOLKATA SEALDAH TO PURI                   |\n");
	    printf("\t\t| 6.DEPARTURE TIME : 20:00                                     |\n");
	}
	if (train_num==22204)
	{
		printf("\t\t| 4.TRAIN          : SECUNDERABAD - VISAKHAPATNAM DURONTO EXP  |\n");
	    printf("\t\t| 5.DESTINATION    : SECUNDERABAD TO  VISAKHAPATNAM            |\n");
	    printf("\t\t| 6.DEPARTURE TIME : 20:15                                     |\n");
	}
	if (train_num==22206)
	{
		printf("\t\t| 4.TRAIN          : MADURAI - CHENNAI CENTRAL AC DURONTO EXP  |\n");
	    printf("\t\t| 5.DESTINATION    : MADURAI TO CHENNAI CENTRAL                |\n");
	    printf("\t\t| 6.DEPARTURE TIME : 22:40                                     |\n");
	}
	if (train_num==12426)
	{
		printf("\t\t| 4.TRAIN          : JAMMU TAWI - NEW DELHI RAJDHANI EXPRESS   |\n");
	    printf("\t\t| 5.DESTINATION    : JAMMU TO NEW DELHI                        |\n");
	    printf("\t\t| 6.DEPARTURE TIME : 19:40                                     |\n");
	}
	if (train_num==12430)
	{
		printf("\t\t| 4.TRAIN          : NEW DELHI - LUCKNOW AC SF EXPRESS         |\n");
	    printf("\t\t| 5.DESTINATION    : NEW DELHI TO LUCKNOW                      |\n");
	    printf("\t\t| 6.DEPARTURE TIME : 20:50                                     |\n");
	}
	if (train_num==12437)
	{
		printf("\t\t| 4.TRAIN          : SECUNDERABAD - HAZRAT NIZAMUDDIN EXP      |\n");
	    printf("\t\t| 5.DESTINATION    : SECUNDERABAD TO HAZRAT NIZAMUDDIN         |\n");
	    printf("\t\t| 6.DEPARTURE TIME : 12:45                                     |\n");
	}
	if (train_num==12951)
	{
		printf("\t\t| 4.TRAIN          : MUMBAI CENTRAL - NEW DELHI RAJDHANI EXP   |\n");
	    printf("\t\t| 5.DESTINATION    : MUMBAI CENTRAL TO NEW DELHI               |\n");
	    printf("\t\t| 6.DEPARTURE TIME : 16:35                                     |\n");
	}
	if (train_num==12953)
	{
		printf("\t\t| 4.TRAIN          : MUMBAI CENT - HAZRAT NIZAMUDDIN KRANTI EXP|\n");
	    printf("\t\t| 5.DESTINATION    : MUMBAI CENTRAL TO HAZRAT NIZAMUDDIN       |\n");
	    printf("\t\t| 6.DEPARTURE TIME : 17:40                                     |\n");
	}
}


void cancel(void)   /* Sorry this function does not work. Coding is not completed. Codes have been removed due to some errors  */
{
	/*FILE *f,*t;
	int i=0;
	int trainnum;
	t=fopen("seats_reserved.txt","w");
	if ((f=fopen("seats_reserved.txt","r"))==NULL)
	{
		printf("NO RECORD ADDED.");
		main();
		* * * * *
		*
		*
		*
		*
		*
		*
		*  /  missing codes  /
	}
	else*/
	system("cls");
	int trainnum;
	printf("-----------------------\n");
		printf("ENTER TRAIN NUMBER: \n");
			printf("-----------------------\n");
		fflush(stdin);
		scanf("%i",&trainnum);
		printf("\n\nCANCELLED");  
		getch();
}


              


