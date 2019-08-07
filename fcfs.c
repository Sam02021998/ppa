#include<stdio.h>

int main()
{
int n,at[20],bt[20],wt[20],tat[20],ct[20],i,j; 
float totaltat=0,totalwt=0;
int sum=0;

printf("\n Enter the no of proces");
scanf("%d",&n);

printf("\n ENter the arrival time and burst time");
for(i=0;i<n;i++)
{
printf("\n Arrival time p[%d]",i+1);
scanf("%d",&at[i]);
printf("\n Burst time p[%d]",i+1);
scanf("%d",&bt[i]);
}
// forr ct
for(j=0;j<n;j++)
{
sum=sum+bt[j];
ct[j]+=sum;
}


for(int k=0;k<n;k++)
{
tat[k]=ct[k]-at[k];
totaltat+=tat[k];
}

for(int p=0;p<n;p++)
{
wt[p]=tat[p]-bt[p];
totalwt+=wt[p];
}


printf("p#\tAT\tBT\tTAT\tWT\t\n\n");
for(i=0;i<n;i++)
{
printf("P%d\t%d\t%d\t%d\t%d\n",i+1,at[i],bt[i],tat[i],wt[i]);
}

printf("\n Average of TAT=%f",totaltat/n);
printf("\n Average of WTT=%f",totalwt/n);

return 0;
}

