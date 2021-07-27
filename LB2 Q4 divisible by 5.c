//Q.4)Accept one number and check weather it is divisible by 5 or not(i/p 15, o/p true,i/p:12,o/p:false)

#include<stdio.h>
#define TRUE 1
#define FALSE
int check(int ino)
{
	if((ino%5)==0)
	{
		printf("\nTRUE:");
	}
	else
	{
		printf("\n FALSE");
	}
}
int main()
{
int ino=0;
int ret =0;              //third variable 

printf("enter a number:");
scanf("%d",&ino);	

ret=check(ino);                    //third variable fun call
printf("%d",ret);




return 0;
}
