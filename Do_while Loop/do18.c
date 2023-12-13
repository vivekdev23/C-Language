#include<stdio.h>

int main ()

{
    //  A  C  E  G  I  K  M  O  Q  S  U  W  Y

    char a,n,i='A';

     printf("Enter a alphabet letter : ");
     scanf("%c",&n);

if(n>63 && n<91){

    do
    {
        if(i%2==1){
            printf(" %c ",i);
        }
        i++;
    } while (i<=n);   
}
else {
    printf("Enter a valid alphabet letter : ");
}
}