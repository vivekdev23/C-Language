#include<stdio.h>

int main()
{
    int eng[5],hin[5],mth[5],total,i;
 
   float pre;
  
     
    for(i=0;i<5;i++)
    {
      printf("[%c] English sub marks is : ",65+i);
      scanf("%d",&eng[i]);
	  
      printf("[%c] Hindi sub marks is : ",65+i);
      scanf("%d",&hin[i]);

      printf("[%c] Mathas sub marks is : ",65+i);
      scanf("%d",&mth[i]);
	  
	  printf("\n");
    }

    for (i=0;i<5;i++)
    {
        total= eng[i]+hin[i]+mth[i];
		
		pre=(total*100)/300;
		
	
	 printf(" \n Studant [%c] marks of English [%d]  Hindi [%d] Mathas [%d] = Total is : [%d] : pre [%.2f] : ",65+i,eng[i],hin[i],mth[i],total,pre);
	
	    if(eng[i]<33 || eng[i]>100 || hin[i]<33 || hin[i]>100 || mth[i]<33 || mth[i]>100 ){
			printf(" studant is  fail ");
		}
		
		else if(pre>75)
		{
			printf(" Grad is A++ ");
		}
		
		else if(pre>33 && pre<=50) 
		{
			printf(" Grad is C ");
		}
		
		else if(pre>50 && pre<=65) 
		{
			printf(" Grad is B ");
		}
 
        else if(pre>65 && pre<75) 
		{
			printf(" Grad is A ");
		} 
		            
    }


}