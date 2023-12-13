#include<stdio.h>

struct Student
{
    int rollno;
    char name[50];
    int m,s,e;
    int t;
    float per;
};

int main()
{
    struct Student a[5];
    int i;


    for (i = 0; i < 2; i++)
    {

        printf("\nEnter a Roll No : ");
        scanf("%d",&a[i].rollno);
        printf("\nEnter a Name   : ");
        scanf("%s",&a[i].name);
        printf("\nEnter a Maths marks : ");
        scanf("%d",&a[i].m);
        printf("\nEnter a Scinse marks : ");
        scanf("%d",&a[i].s);
        printf("\nEnter a English marks : ");
        scanf("%d",&a[i].e);
        
       a[i].t=a[i].m+a[i].s+a[i].e;
       a[i].per=(float)a[i].t/3;
    }
    
        printf("\nRollNo\tName\tMaths\tSci\tEnglish\tTotal\tper");
    for ( i = 0; i < 2; i++)
    {
        printf("\n%d\t%s\t%d\t%d\t%d\t%d\t%.2f",a[i].rollno,a[i].name,a[i].m,a[i].s,a[i].e,a[i].t,a[i].per);

    }
    
    
    
}