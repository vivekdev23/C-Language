#include<stdio.h>

// fcatorial No => 3  >  3*2*1 = 6 

int fact(int n)
{
  if(n==1)
  {
    return 1;
  }
  else
  {
    return n*fact(n-1);
  }

}

int main()
{
    int x=fact(5); 
    printf("factorial Num is : %d ",x );
}