#include<stdio.h>

// pointer is store to address of other veriables 

// pointer is a refarans veriable


int main()
{
    int a=10,*p,**q;

    p=&a;
    q=&p;

    printf("value of A : %d  \n ",a);
    printf("Address of A : %u  \n ",&a);  // %u
    printf("Address of A using P : %d  \n ",p); 
    printf("Address of  P : %u  \n ",&p); 
    printf("Value  of A using  P : %d  \n ",*p); 
    printf("Value  of A using  Q : %d  \n ",**q); 


    
}