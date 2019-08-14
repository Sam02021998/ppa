#include<stdio.h>
#include<stdlib.h>
#define new (q*)malloc(sizeof(q))
typedef struct Q
{
	int data;
	struct Q*next;
	
}q;

q *front=NULL,*rear=NULL,*newn=NULL;
void Enq(int d)
{
	newn=new;
	newn->data=d;
	newn->next=NULL;
	

	if(front==NULL && rear==NULL)
	{
		front=rear=newn;
	}
	else
	{
		rear->next=newn;
		rear=rear->next;
		
	}
}
void Deq()
{
	if(front==NULL && rear==NULL)
	{
		printf("\n Q is Empty");
	}
	else if(front==rear)
	{
		printf("\n Deleted Item %d",front->data);
		front=rear=NULL;
	}
	else
		printf("\n Deleted Item %d",front->data);
	front=front->next;
}
void Print()
{
	q *tmp=front;
	while(tmp)
	{
		printf("%d->\t",tmp->data);
		tmp=tmp->next;
	}
}
void peek()
{
	printf("%d",front->data);
}
void rev(int k)
{
	int i,p=1;
	q *tmp=front;
        q *tmp1=NULL;
	q *newno=NULL;
	q *temp=NULL;
	while(p<k)
	{
	
	        tmp=tmp->next;
		p++;
        }
	
	tmp1=tmp->next;
        tmp->next=NULL;

while(front)
{
newno=front->next;
front->next=temp;
temp=front;
front=newno;
}

front=temp;
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=tmp1;
}


	


void main()
{
	int ch,data,k;
	do
	{
		printf("\n1)Enq \n2)Deq \n3)Print \n4)peek\n5)Reverse\n6)Exit");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("\n Enter the data");
			       scanf("%d",&data);
			       Enq(data);
			       break;
			case 2:Deq();
			       break;
			case 3:Print();
			       break;
			case 4:peek();
			       break;

			case 5:printf("\n Enter no");
			       scanf("%d",&k);
			       rev(k);
			       break; 
			case 6:exit(0);
			       break;
		}
	}while(ch!=6);
}
