#include<stdio.h>
int main()
{
int A[10][10],B[10][10],i,j,C[10][10];
for(i=0;i<2;i++)
for(j=0;j<2;j++)
{
scanf("%d%d",&A[i][j],&B[i][j]);
C[i][j]=A[i][j]+B[i][j];
}
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
printf("  %d",C[i][j]);
printf("\n");
}
return 0;
}
