#include<stdio.h>
int xor(int x, int y)
{
if(x==y)
return 0;
else
return 1;
}
int main()
{
int i,j,k;
int n,m;
int d[100],g[100],r[100],z[100];
printf("Enter no. of Data Bits:");
scanf("%d",&n);
printf("Enter the no. of Generator Bits:");
scanf("%d",&m);
printf("Enter the Data Bits:\n");
for(i=0;i<n;i++)
scanf("%d",&d[i]);
printf("Enter the Generator Bits:\n");
for(i=0;i<m;i++)
scanf("%d",&g[i]);
for(i=0;i<m-1;i++)
d[n+i]=0;
for(i=0;i<m;i++)
{
r[i]=d[i];
z[i]=0;
}
for(i=0;i<n;i++)
{
k=0;
int msb=r[i];
for(j=i;j<m+i;j++)
{
if(msb==0)
r[j]=xor(r[j],z[k]);
else
r[j]=xor(r[j],g[k]);
k++;
}
r[m+i]=d[m+i];
}
printf("\nThe Code bits added:");
for(i=n;i<n+m-1;i++)
{
d[i]=r[i];
printf("%d",d[i]);
}
printf("\nThe code Data is:");
for(i=0;i<n+m-1;i++)
printf("%d",d[i]);
printf("\n");
return 0;
}
