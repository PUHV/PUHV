// Q3) Program to print numbers from 5 to 1 on screen(i/p 1,o/p 54321)

#include<stdio.h>
void display(int no)
{
	int i=5;
	while(i>=no)
	{
		printf("\n%d",i);
		i--;
		
	}
}
int main()
{
	int no =1;
	printf("enter a number:");
	scanf("%d",&no);
	
	display(no);
	
	return 0;
}
