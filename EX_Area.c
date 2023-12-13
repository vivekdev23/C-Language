#include<stdio.h>
#include<math.h>

int Square(int side);
float Circle(float red);
int Rectangle(int width, int height);

int main()
{
  

   char ch;
   
   int side,R;
   
   float red;
  
  printf("press [S] to calculate area of Square ");
  printf("\npress [C] to calculate area of Circle ");
  printf("\npress [R] to calculate area of Rectangle \n ");

  scanf("%c",&ch);
  
  
  
  if(ch=='s' || ch=='S')
  {
  
     printf("\n\tcalculating area of Square \n");
     
     printf("Enter a number  : ");
     scanf("%d",&side);
   
     printf("Arae of square is : %d " , Square(side));
     
  }
  
  else if(ch=='c' || ch=='C')
  {
  
    printf("\n\tcalculating area of circle \n");
    
    printf("Enter a number  : ");
    scanf("%f",&red);

      printf("Arae of Circle is : %f " , Circle(red));
     
  }
  
   else if(ch=='r'|| ch=='R')
  {
 
  int width,height;
  
  printf("\n\tcalculating area of rectangle \n ");
  
  printf("Enter a Width  : ");
  scanf("%d",&width);
  printf("Enter a Height  : ");
  scanf("%d",&height);
  
   printf("Arae of Rectangle is : %d ",Rectangle(width,height));
   
  }
  
    return 0;
}


// function 

int Square(int side){
       return side*side;
}

float Circle(float red){
      return 3.14*(red*red);
}

int Rectangle(int width,int height){
       return width*height;
}



