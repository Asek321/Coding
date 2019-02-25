#include<stdio.h>
int main()
{
    int i,s=0,n;
    printf("enter a number : ");
    scanf("%d",&n);
    for(i=n;i>0 ;i--)
    {
      s=s+i;
      printf("%d\n",i);
    }
     printf("%d",s);
    return 0;

}
