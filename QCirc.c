
#include<stdio.h>
#include<stdlib.h>
#define new (q*)malloc(sizeof(q))

typedef struct d
{
	int data;
	struct d *next;
}q;

q *head=NULL;
q *f=NULL;
q *r=NULL;
int count=0;
void insert()
{
	int d;
	q *newnode=NULL;
	newnode=new; 
	printf("\nenter data:\n");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(f==NULL && r==NULL)
	{
		head=new;
		head->data=newnode->data;
		f=head;
		r=head;
                f->next=head;
                count++;    
	}
	else
	{
		
		r->next=newnode;
		r=r->next;
		r->next=NULL;
                count++; 	 
	}
        r->next=f;	 
}

void delete()
{
        q *temp=NULL;
	if(f==NULL && r==NULL)
	{
		printf("\nqueue is empty\n");
	}
	else if(f==r)
	{
		printf("\ndeleted element is %d",f->data);
		f=r=NULL;
                count--; 
	}	
	else
	{
                temp=f;
		printf("\ndeleted element is %d",f->data);
		f=f->next;
                r->next=f;
                free(temp);
                count--;
	}	 
}

void display()
{
	q *temp=f;
        int c=count;
	printf("\n");
	if(f==NULL && r==NULL)
	{
		printf("\nqueue is empty\n");
	}
	else
	{	
		while(c+1>0)
		{
			printf("%d\t",temp->data);
			temp=temp->next;
                        c--;  
		}
	}
	printf("\n");

}

int main()
{
	int n,ch;
	do
	{	
		printf("\nenter your choice:\n1.insert\n2.delete\n3.display\n4.exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:insert();
			       break;
			case 2:delete();
			       break;
			case 3:display();
                               break;                              	 
		}		 
	}while(ch<4);
}






