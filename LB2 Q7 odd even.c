//Q.7 WAP accept one number from user print "*" for odd number and "@" for even number.(i/p:12 o/p:@, i/p:11,o/p:*)

#include<stdio.h>
void Accept(int ino)
{
	
	if(ino%2==0)
	{
			printf("\n* ");
	}


else
{
	
	printf("\n@");
	
}
}
int main()
{
	int ino=0;
	printf("enter a number");
	scanf("%d",&ino);
	
	Accept(ino);
	
	return 0;
	
}
