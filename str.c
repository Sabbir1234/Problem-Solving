#include<stdio.h>
struct date
{
    int date;
    int mm;
    int year;
};
struct person{
   char name[20];
   int age;
   char address[20];
   struct date dob;

};
int main()
{
    struct person p1,p2;
    printf("Enter the name of person  ");
    gets(p1.name);
    printf("Enter the age of person  ");
    scanf("%d",&p1.age);
    printf("Enter the address of the person  ");
    scanf("%s",p1.address);
    printf("%s\n",p1.name);
    printf("%d\n",p1.age);

    printf("%s\n",p1.address);
    scanf("%d %d %d",&p1.dob.date,&p1.dob.mm,&p1.dob.year);
    printf("%d\n%d\n%d\n",p1.dob.date,p1.dob.mm,p1.dob.year);

}
