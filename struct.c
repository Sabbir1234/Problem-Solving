#include<stdio.h>
struct dateofbirth
{
    int date , month ,year;
};
struct person
{
   char name[20];
   char ad[20];
   int age,id;
   struct dateofbirth dob;
};
int main()
{
    struct person p1;
    printf("Enter the name of person: ");
    scanf("%s",p1.name);
    printf("Enter the age of the person and then id: ");
    scanf("%d %d",&p1.age,&p1.id);
    printf("Enter the address of the person: ");
    scanf("%s",p1.ad);
    printf("%s who is %d years old lives in %s\n",p1.name,p1.age,p1.ad);
    printf("Enter date of birth (dd / mm / YYYY): ");
    scanf("%d %d %d",&p1.dob.date,&p1.dob.month,&p1.dob.year);
    printf("Date of birth is %d-%d-%d\n",p1.dob.date,p1.dob.month,p1.dob.year);

}
