#include<stdio.h>
#include<stdlib.h>
#define mem (p*)malloc(sizeof(p))
typedef struct l
{
	char c;
	struct l *nxt;
}p;
p *h=NULL;
p *t,*f;
void create(char a[100])
{
	h=mem;
	if(h==NULL)
		printf("delocate mem");
	else
	{
		h->c=a[0];
		h->nxt=NULL;
		t=h;
		for(int i=1;a[i]!='\0';i++)
		{
			f=mem;
			if(f==NULL)
				printf("deloacte");
			else
			{
				f->c=a[i];
				f->nxt=NULL;
				t->nxt=f;
				t=t->nxt;
			}
		}
	}
}
void disp()
{
	t=h;
	while(t)
	{
		printf("%c->\t",t->c);
		t=t->nxt;
	}
}
void main()
{
	int n,n1,sum=0;
	char num[100],num1[100];
	printf("\n Enter the no ");
	scanf("%d",&n);
	sprintf(num,"%d",n);
	create(num);
	disp();
	printf("\n Enter the no for add in first no");
	scanf("%d",&n1);
	sum=n+n1;
	sprintf(num1,"%d",sum);
	create(num1);
	disp();
}
