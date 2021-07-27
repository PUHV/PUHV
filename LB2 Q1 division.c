//write a program which accept two numbers and written division.(I/P 0,0, O/p=-1)

#include<stdio.h>
int Divide(int ino1,int ino2)
{
	
if(ino2==0)	
{
	return -1;
}
else
{
int	ians=ino1/ino2;

return ians;
}
	
}
int main()
{
int ino1=0;
int ino2=0;
int ret=0;

printf("enter first number:");
scanf("%d", &ino1);

printf("enter second number:");
scanf("%d",&ino2);

ret=Divide(ino1,ino2);         // third variable
printf("\n division=%d",ret);




return 0;	
	
}
