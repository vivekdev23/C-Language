#include<stdio.h>

int main ()

{
    
  float  salary,hra,da,gross_s;
    printf("Enter your salary : ");
    scanf("%f",&salary);
    
    if(salary<=5000)
    {
        hra=salary*0.08;
        da=salary*0.20;
        gross_s=salary+hra+da;
    
        printf("\n\t your gross salary is :%f",gross_s);
        
    }
    
    else if(salary<=10000)
    {
        hra=salary*0.12;
        da=salary*0.30;
        gross_s=salary+hra+da;
    
        printf("\n\t your gross salary is :%f",gross_s);
        
    }
    
    else if(salary<=15000)
    {
        hra=salary*0.15;
        da=salary*0.40;
        gross_s=salary+hra+da;
    
        printf("\n\t your gross salary is :%f",gross_s);
        
    }
    
    else if(salary>15000)
    {
        hra=salary*0.20;
        da=salary*0.50;
        gross_s=salary+hra+da;
    
        printf("\n\t your gross salary is :%f",gross_s);
        
    }
    
    
    
    return 0;
}