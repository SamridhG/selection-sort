#include<stdio.h>
#include<math.h>
int order(int a[],int,int);
int order(int a[],int i,int n)
{
 int z=a[i],j;
 int ind=i;
 for(j=i+1;j<n;j++)
 {
      if(z>a[j])
      {
           z=a[j];
           ind=j;
      }
 }
 return ind;
}
int main()
{
   int a[1000],i,ind,n;
   printf("enter the no. of elements:");
   scanf("%d",&n);
   printf("enter the elements of array:\n");
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n-1;i++)
   {
      ind=order(a,i,n);
      int temp=a[i];
      a[i]=a[ind];
      a[ind]=temp;
   }
    for(i=0;i<n;i++)
   {
       printf("%d ",a[i]);
   }

}
