/*	A	A	A	A	A
	B	B	B	B	B
	C	C	C	C	C
	D	D	D	D	D	
	E	E	E	E	E
	*/ 
	
	
#include<stdio.h>
int main()
{
	int i,j,n=65;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("%c\t",n);
		}
		n++;
		
		printf("\n");
	}
	
return 0;
}

