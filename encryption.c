 #include<stdio.h>
int main()
{
int i,x;
char str[100];
printf("\n Enter the string ");
gets(str);
printf("\n choose a option");
printf("1= Encrypt string \n");
printf("2= decrypt string \n");
scanf("%d",&x);
switch(x)
{
case 1:
 for(i=0;(i<100 && str[i]!='\0');i++)
str[i]=str[i]+3;
printf("\n Encrypted string:%s\n",str);
break;
case 2:
for(i=0;(i<100 && str[i]!='\0');i++)
str[i]=str[i]-3;
printf("\n decrypted data :%s\n",str);
break;
default:printf("\n Error");
}
return 0;
}


