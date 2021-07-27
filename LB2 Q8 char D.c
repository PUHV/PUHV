// Q.8 Accept one character from user and display tht character on screen.(i/p:D,o/p:D)

#include<stdio.h>
char Display(char cvalue)
{
	
	printf("%c",cvalue);
}

int main()
{
	char cvalue=0;
	printf("enter a character:");
	scanf("%c",&cvalue);
	Display(cvalue);   //fun calling
	
	return 0;
}
