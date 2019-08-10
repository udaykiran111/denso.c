#include<stdio.h>
int main()
{
int i,j,count++;
scanf("%d""%d",&i,&j);
while(i>1)
{
i=i-(j/100)*i;
count++;
}
printf("%d",count);
}
