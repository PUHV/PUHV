//Q5 Accept one number from user and print that number of * on screen.

#include<stdio.h>
void Accept(int ino)
{
	int icnt=0;
	
	for(icnt=0;icnt<5;icnt++)
	{
		printf("*");
	}
}

int main()
{
	int ino=0;
	
	printf("enter a number:");
	scanf("%d",&ino);
	
	 Accept(ino);
	
	return 0;
}
