#include <stdio.h>

int main()
{
    int a,b,c;
    
    printf("\n Enter value a : ");
    scanf("%d",&a);   
    printf("\n Enter value b : ");
    scanf("%d",&b);   
    printf("\n Enter value c : ");
    scanf("%d",&c);
   
    
    if(a>b && a>c ){
         printf("\n \t a :( %d) is larger than b (%d) and c (%d)",a,b,c);
         
    }
    
    else if (b>c){
        printf("\n \t b :( %d) is larger than a (%d) and c (%d) ",b,a,c);
    }
    
     else {
           printf("\n \t c :( %d) is larger than a (%d) and b (%d) ",c,a,b);
    }
    

    return 0;
}