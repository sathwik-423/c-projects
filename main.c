#include <stdio.h>
int main()
{
   //program for calculating cubes between two numbers
   int low,high,cube;
   int n=0;
   printf("Enter the lowest number: ");
   scanf("%d",&low);
   printf("Enter the highest number: ");
   scanf("%d",&high);
   if(low<high)
   {
       for(int i=low;i<=high;i++)
       {
           cube=i*i*i;
           printf("%d ",cube);
           n+=cube;
       }
       printf("\nsum of cubes from %d to %d is: ",low,high);
       printf("%d ",n);
   }
   else if(low==high)
   {
       printf("%d , %d",low*low*low,high*high*high);
   }
   else
   {
       printf("highest nmber must be higher than lowest number");
   }
   return 0;
}