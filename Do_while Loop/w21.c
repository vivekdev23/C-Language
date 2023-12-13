#include<stdio.h>

int main()

{
    char ch='A';
    int i=0;
   
    while (i<=10)
    {
        if(i%2==0){
            printf(" %c ",ch);
        }
        else{
            printf(" %c ",ch+32);
        }
        i++;
        ch=ch+2;
    }
    
}