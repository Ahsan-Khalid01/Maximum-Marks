#include<stdio.h>
int main()

{
	int marks [5];
	for(int i=1;i<=5;i++)
	{
	printf("Enter the Marks of Student  %d  :",i);
	scanf("%d",&marks[i]);
	
	
	}
int max;
max = marks[0];
	for(int j=1;j<=5;j++)
	{
	if( marks[j]>max)
	{
	max =marks[j];
	}
	
	}
	printf("Maximum Marks   %d :",max);
	

	
}
