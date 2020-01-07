#include<stdio.h>
// test /
int main()
{
   int i, times;
   scanf("%d", &times);
   i = 0;
   j = 0;
   while (i <= times)
   {
     while (j <= times)
     {
       printf("%j\n", j);
       j++;
     }

     if (i > 2) {
       printf("%d\n", i);
     }
     i ++;
   }
// Test part./..
// Test for the comments :
   int i,j;
   for (i = 1;i <= 24;i++)
     {
       for (j = i; j < 24; j++)
         {
            printf("%d",i);
	    printf(" Test for the Assignment.");
         }
     }

   return 0;
}
