#include<stdio.h>

int  main()
{
   char str[15];

   int i ,j;
   
    printf(" Enetr a string : ");
	scanf("%s",&str);


	j=0;
	while(str[j]!='\0')
	{
		j++;
	}
	
    printf("\nYour revers string is : ");

    for(i=j;i>=0;i--)
	{
		printf(" %c ",str[i]);
	}

	printf("\n your string is  : %s ",str);

}