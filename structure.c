#include<stdio.h>
#include<string.h>

void uniono();
void enumuna();
struct Book{
 char Title[20];
 char Author[20];
 int Price;
};
union Employe{
char name[20];
int Salary;
char Company[10];
};
enum calender{
JANUARY=1,FEBRUARY,MARCH,APRIL,MAY,JUNE,JULY,AUGUST,SEPTEMBER,OCTOBER,NOVEMBER,DECEMBER



};
int main(){
struct Book book1,book2;
strcpy(book1.Title,"Classical physics");
strcpy(book2.Title,"Rocket science");
strcpy(book1.Author,"Robert ");
strcpy(book2.Author,"Chrstopher");
book1.Price=849;
book2.Price=999;
printf("\n The book Title is : %s , \n Author : %s, \n Price: %d,\n ",book1.Title,book1.Author,book1.Price);
printf("\n The book Title is : %s , \n Author : %s, \n Price: %d,\n ",book2.Title,book2.Author,book2.Price);
uniono();
enumuna();
return 0;
}

void uniono()
{
  union Employe Ankit,Harsh;
  printf("\t\t\t\t\t\n\n\n");
  strcpy(Ankit.name,"Ankit");
  printf("Name: %s \n",Ankit.name);
  strcpy(Ankit.Company,"Travelphotovlog");
   printf("Company: %s \n",Ankit.Company);
  Ankit.Salary = 100000;
  printf(" Price: %d\n",Ankit.Salary);
  strcpy(Harsh.name,"Harsh");
  printf("Name: %s \n",Harsh.name);
  strcpy(Harsh.Company,"Travelphotovlog");
  printf(" Company: %s \n",Harsh.Company);
  Harsh.Salary = 100000;
printf(" Price: %d",Harsh.Salary);
}
void  enumuna(){
enum calender Calender;
Calender=11;
printf("\n");
switch(Calender){
case(JANUARY):
    printf("The Month is JANUARY\n");
    break;
case(FEBRUARY):
    printf("The Month is FEBRUARY\n");
    break;
case(MARCH):
    printf("The Month is MARCH\n");
    break;
case(APRIL):
    printf("The Month is APRIL\n");
    break;
case(MAY):
    printf("The Month is MAY\n");
    break;
case(JUNE):
    printf("The Month is JUNE\n");
    break;
case(JULY):
    printf("The Month is JULY\n");
    break;
case(AUGUST):
    printf("The Month is AUGUST\n");
    break;
case(SEPTEMBER):
    printf("The Month is SEPTEMBER\n");
    break;
case(OCTOBER):
    printf("The Month is OCTOBER\n");
    break;
case(NOVEMBER):
    printf("The Month is NOVEMBER\n");
    break;
case(DECEMBER):
    printf("The Month is DECEMBER\n");
    break;
default:
     printf("Value not Found");
     break;
}

}
