#include <stdio.h>
int main ()
{
  char name[20];
  char sex[2];
  int age;
  char tel[11];
  char location[25];
  char national_ID_number[16];
  printf("Hello new user and welcome to Forms. Kindly enter your bio data\n"); //welcomes you to the Forms
  printf("Full legal name:\n"); //requests your full legal name
  scanf("%19s", name);  //accepts entry
  printf("Sex. Format should be M/F:\n"); //requests your sex
  scanf("%1s", sex); //accepts entry
  printf("Age:\n"); // requests your age
  scanf("%d", &age); //accepts entry
  printf("Active telephone number. Kindly start with 0 and limit is 10 digits:\n"); // requests your active line
  scanf("%10s", tel);  // accepts entry
  printf("Location:\n"); // requests location
  scanf("%24s", location);  //accepts entry
  printf("National ID number:\n");
  scanf("%15s", national_ID_number);
  printf("Your bio data is below:\n");
  printf("Full legal name: %s\n", name);
  printf("Sex: %s\n", sex);
  printf("Age: %d\n", age);
  printf("Active telephone number: %s\n", tel);
  printf("Location: %s\n", location);
  printf("National ID number: %s\n", national_ID_number);
  printf("Thank you for using Forms\n");
  
 return 0;
}
