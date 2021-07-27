//Q.9 Accept one number and return that number by subtracting 5 from it.(i/p:25,o/p:20)

#include<stdio.h>
int substract(int ino)
{
	
	int iAns=0;
	iAns=ino-5;
	return iAns;
}
int main()
{
	int ino=0;
	int ret=0;
	
	printf("enter a number:");
	scanf("%d",&ino);
	
	ret=substract(ino);
	printf("%d",ret);
	
	return 0;
	
}
