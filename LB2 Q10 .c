//Q.10 Accept one number from user if number is less than 10 then print "Hello" otherwise print "Demo".
//(I/p:5,o/p:"Hello" I/p:15,O/p:"Demo")

#include<stdio.h>
void Display(int ino)
{
  if(ino<10)
  {
  	printf("hello");
  }
  else
  {
  	printf("Demo");
  }
  
}
int main()
{
	int ino=0;
	
	printf("enter a number:");
	scanf("%d",&ino);
	
	Display(ino);
	
	return 0;
	
	
}
