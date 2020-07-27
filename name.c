#include <stdio.h>
struct student
{
    int rollno;
    char name[80];
    int marks;
};

void accept(struct student List[], int s);
void bsortDesc(struct student List[], int s);
int main()
{
    struct student data[20];
    int n;

    printf("Number of records you want to enter? : ");
    scanf("%d", &n);

    accept(data, n);
    printf("\nBefore sorting");
    bsortDesc(data, n);

    return 0;
}

void accept(struct student List[80], int s)
{
    int i;
    for (i = 0; i < s; i++)
    {
        printf("\n\nEnter data for Record #%d", i + 1);

        printf("\nEnter rollno : ");
        scanf("%d", &List[i].rollno);
        getchar();
        printf("Enter name : ");
        gets(List[i].name);

        printf("Enter marks : ");
        scanf("%d", &List[i].marks);
    }
}


void bsortDesc(struct student List[80], int s)
{
    int i, j;
    struct student temp;

    for (i = 0; i < s - 1; i++)
    {
        for (j = 0; j < (s - 1-i); j++)
        {
            if (List[j].marks < List[j + 1].marks)
            {
                temp = List[j];
                List[j] = List[j + 1];
                List[j + 1] = temp;
            }
        }
        printf("mark is %d and roll is %d\n",List[i].marks,List[i].rollno);
    }
}
