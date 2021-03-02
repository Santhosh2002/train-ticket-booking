#include <stdio.h>

struct login
{
  char fname[20];
  char lname[20];
  char username[20];
  char passward[20];
};
void main(){

  user_reg();

}
user_reg()
{
    FILE * user_log = fopen("E:\\user_data.rec" , "w+");
    struct login l;
    printf("ENTER YOUR FIRST NAME: ");scanf("%s\n",&l.fname);
    printf("ENTER YOUR LAST NAME: ");scanf("%s\n",&l.lname);
    printf("ENTER YOUR USER NAME: ");scanf("%s\n",&l.username);
    printf("ENTER YOUR PASSWARD: ");scanf("%s\n",&l.passward);
    fwrite(&l,sizeof(l),l,user_log);
    fclose(user_log);
    system("CLS");
}
