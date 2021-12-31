
#include<stdio.h>
#include<stdlib.h>

int main()
{
   int *a,n,i,pos;

   printf("enter the size of array:");
   scanf("%d",&n);

   a=(int*)malloc(sizeof(int)*n);
   printf("enter the elements:\n");

   for(i=0;i<n;i++)
   {
      scanf("%d",(a+i));
   }

   printf("enter the position of element to be deleted:");
   scanf("%d",&pos);


   if(pos<=n)
{
      for(i=pos-1;i<n;i++)
      {
	int j=i+1;
	 *(a+i)=*(a+j);
      }
      printf("after deletion the array elements is:\n");

      for(i=0;i<*(a+i);i++)
      {
         printf("%d\n",(*(a+i)));
      }
}
   else
      {
      	 printf("Invalid Input");
      }
}
