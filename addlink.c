#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define mem (p*)malloc(sizeof(p))
typedef struct Link
{
	char data;
	struct Link *next;
}p;
p *h=NULL,*t=NULL;

void create(char c[100])
{
	p *f;
	h=mem;
	if(h==NULL)
		printf("Delocate");
	else
	{
		h->data=c[0];
		h->next=NULL;
		t=h;
		for(int i=1;c[i]!='\0';i++)
		{
			f=mem;
			if(f==NULL)
				printf("Deloacate");
			else
			{
				f->data=c[i];
				f->next=NULL;
				t->next=f;	
				t=t->next;	
			}
		}
	}
}
void display()
{
	t=h;
	while(t)
	{
		printf("\n %c->\t",t->data);
		t=t->next;
	}
}
void main()
{
	int no,d,n1,sum=0;
	char num[10],num1[100];
	printf("\n ENter the no");
	scanf("%d",&no);
	sprintf(num,"%d",no);
	create(num);
	display();
	printf("\n Enter the no for addition");
	scanf("%d",&n1);
	sum=no+n1;
	sprintf(num1,"%d",sum);
	printf("\n Addition is -------");
	create(num1);
	display();
	getchar();
}
