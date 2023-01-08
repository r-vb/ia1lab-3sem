#include<stdio.h>

int search(int n,int *a,int key);

int main()
{
       int n, key, i;
   printf("enter the size of array: ");
   scanf("%d",&n);
        int a[n];
   printf("Enter your %d elements--\n",n);
   for ( i = 0; i < n; i++ )
   {
      scanf("%d",&a[i]);
   }
   printf("enter the element to be searched: ");
   scanf("%d",&key);
   search(n,a,key);
return 0;
}

int search(int n,int *a,int key)
{
        int i, flag=0;
   for ( i = 0; i < n; i++ )
   {
      if ( key == a[i] )
      {
         flag = 1;
         break;
      }
   }
   if(flag == 1)
   {
      printf("%d is present in the array.\n",key);
   } 
   else {
      printf("%d is not present in the array.\n",key);
   }
}