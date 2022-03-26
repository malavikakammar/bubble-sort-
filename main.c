#include <stdio.h>

int main(void) 
{
  int a[20],n,i,j,temp;
  //accept the size of the array
  printf("enter the number of elements:");
  scanf("%d",&n);
  //accept the elements in array
  printf("enter the %d elements",n);
  for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
  for(i=0;i<n-1;i++)
    { 
      for(j=0;j>n-1-i;j++)
        { 
          if(a[j]>a[j+1])
          {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
          }
          }
        }
  //print the sorted array
  printf("the sorted array is ...\n");
  for(i=0;i<n;i++)
    { 
      printf("%d\t",a[i]);
      }
  printf("\n");
  return 0;
  
}