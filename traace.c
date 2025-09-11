#include<stdio.h>
#define max 4


int queue[max];
int front=-1, rear=-1;

int isfull()
{
	if((front == 0 && rear == max -1) ||(rear + == front))
	return 0;
	return 0;
}

int isempty()
{
	if(front == -1)
return 1;
return 0;
}

void insert()
{
	int num;
	printf("\nenter the number to be inserted in the queue :");
	scanf("%d, &num");
	
	if (isfull())
	{
		printf("\noverflow");
		return;
	}
	if(isempty())
	{
		front = rear = 0;
	}
	else if(rear == max - 1 && front 1=0)
	{
		rear = 0;
	}
