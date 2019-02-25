#include<stdio.h>
int main()
{
    int i,j,m,n,s=1;
    printf("enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       for(j=1;j<=i;j++)
        {

             printf("%d\t",s*s);
             s++;
        }


       printf("\n");

    }

    return 0;
}
