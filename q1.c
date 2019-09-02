#include<stdio.h>
#define MAX 10
int G[MAX][MAX];
void create(int n)
{
	int i,j;

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\n\tEnter [%d][%d] ::",i,j);
			scanf("%d",&G[i][j]);
			
			if(G[i][j]!=0 &&  G[i][j]!=1)
			{	
				printf("\t\tNumber should be 0 and 1 !\n");
				printf("\n\tReEnter Number :: ");
				j--;
			}

		}
		
	}
}
void display(int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",G[i][j]);
		}
		printf("\n");
	}
}
void degree(int n)
{
	int i,j,indegree,outdegree;
	for(i=0;i<n;i++)
	{
		indegree=outdegree=0;
		for(j=0;j<n;j++)
		{
			if(G[i][j]!=0)
				outdegree++;
			if(G[j][i]!=0)
				indegree++;
		}
		printf("\nvertex=%d,indegree=%d,outdegree=%d,total=%d",i,indegree,outdegree,indegree+outdegree);
	}

}
int main()
{
	int s,n;
	do
	{
		printf("\nMENU\n1.CREATE\n2.DISPLAY\n3.TOTAL\n4.EXIT\n");
		printf("Enter The choice");
		scanf("%d",&s);
		switch(s)
		{
			case 1:
				printf("Enter The How MANY vertex");
				scanf("%d",&n);
				create(n);
				break;
			case 2:
				display(n);
				break;
			case 3:
				degree(n);
				break;
			case 4:
				break;
			default:
				printf("invalid choice");
				break;
		}
	}
	while(s<4);
}
