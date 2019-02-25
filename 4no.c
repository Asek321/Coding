#include<stdio.h>
int main()
{
    int unit,bill1,bill2,bill;
    printf("enter the units: ");
    scanf("%d",&unit);
    if(unit>0&&unit<=250)
   {
       bill1=4.5*250;
   }
   if(unit>250)
   {
       unit=unit-250;
   bill2=unit*7;
   }
   bill=bill1+bill2;
   printf("%d",bill);
   return 0;
}
