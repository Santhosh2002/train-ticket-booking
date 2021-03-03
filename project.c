#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

void user_reg();
void user_login();

struct login
{
  char fname[20];
  char lname[20];
  char username[20];
  char passward[20];
};

void main(){
  int choice;
  printf("Enter '1' for register\nEnter '2' for login\n");
  scanf("%d",&choice);

  switch (choice)
  {
    case 1 : 
      system("CLS");
      user_reg();

    case 2 : 
      system("CLS");
      user_login();  
  }

  
}
void user_reg()

{

  char fname[20];
  char lname[20];
  char username[20];
  char passward[20];
    FILE * user_log = fopen("user_data.txt" , "w");
  struct login l ;
    printf("ENTER YOUR FIRST NAME: ");scanf("%s",&l.fname);
    printf("ENTER YOUR LAST NAME: ");scanf("%s",&l.lname);
    printf("ENTER YOUR USER NAME: ");scanf("%s",&l.username);
    printf("ENTER YOUR PASSWARD: ");scanf("%s",&l.passward);
    fwrite(&l,sizeof(l),1,user_log);
    fclose(user_log);
    printf("\n\nyour user name is your user ID\n");
    printf("Now login with user ID and passward\n");
    printf("press any key to continue...........\n");
    getch();
    system("CLS");
    user_login();
}
void user_login()
{
  char username[200],passward[20];
  FILE * user_log = fopen("user_data.txt" ,"r");
  struct login l ;
  printf("User ID: ");
  scanf("%s",&username);
  printf("Password: ");
  scanf("%s",&passward);  
  while(fread(&l,sizeof(l),1,user_log))
  {
    if (strcmp(username,l.username)==0 && strcmp(passward,l.passward)==0)
    {
      printf("Login Successfull\n");
    }
    else
    {
      printf("Please Enter correct User ID and Passward\n"); 
    }
    fclose(user_log);
  }

}