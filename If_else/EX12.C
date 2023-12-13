#include<stdio.h>
int main()
{
int total,per;

int phy;
int che;
int bio;
printf("enter a marks of subject:\n");
scanf("%d %d %d",&phy,&che,&bio);
total = phy+che+bio;
	printf("marks of student:%d\n",total);
per= total*0.3;
	printf("percentage of student: %d\n",per);

if(per>75) {

	printf("grad is A");

}

else if(per>60 && per<=75){
	printf("gread is B");


}
else if((per>45) &&(per<=60)) {
	printf("gread is C");

}
else if((per>35) &&(per<=45)) {
	printf("gread is D");


}

else {
	printf("batter luck next time ! fail");

}
   return 0;
}