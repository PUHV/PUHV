// program to print 5 times INDIA on screen (i\p=5 o/p INDIA INDIA INDIA INDIA INDIA)

#include<stdio.h>
void display(int no)
{
	int i=0;
	
for(i=1;i<=no;i++)
{
	printf("\nINDIA");
	
}
}
int main()
{
int no=0;
printf("enter a number:");
scanf("%d",&no);

display(no);  //call

return 0;	
	
}
