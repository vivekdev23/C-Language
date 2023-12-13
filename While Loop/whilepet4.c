#include<stdio.h>
int main()
{
	int a=1,b=1,n=65;
	
	while(a<=5)
	{
		b=1;
		while(b<=5)
		{
			printf("%c\t",n);
			b++;
		}
		n++;
		printf("\n");
		a++;
	}
	
return 0;
}