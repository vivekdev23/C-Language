#include<stdio.h>

int  main()
{
   char str[20];
   
    printf(" Enetr a string : ");
	scanf("%s",&str);  // using to wreting string with space : "%[^\n]s"
	
	printf("\n your string is  : %s ",str);
	
	int i=0;
    while(str[i]!='\0')
	{
		i++;
	}
	printf("\n your syring length is :  %d ",i);
	
}