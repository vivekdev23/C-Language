#include<stdio.h>

int main()

{
    char i='A',n;

    printf("Enter a alphabet letter  : ");
    scanf("%c",&n);

  if(n>'A' && n<'Z'){
    while(i<=n)
    {
     printf(" %c - %d " , i,i);
     i++;
    }
}

else{
    printf("Enter a capital alphabet letter... ");
}
    return 0;
}