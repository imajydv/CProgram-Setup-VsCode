#include<stdio.h>
#include<conio.h>
int main(void)
{
	int num;
	printf("Program for find given number is even or odd number\n");
	printf("Enter a number::   ");
	scanf("%d",&num);
	if(num%2==0)
	{
	printf("number is even\n");
	}
	else
	  { 
		printf("Number is odd\n");
		num++;
		printf("Next even number is %d \n",num);
  	  }
		getch();
}