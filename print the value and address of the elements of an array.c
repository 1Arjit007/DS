#include<stdio.h>
Void main()
{
  int arr[5]={5,10,15,20,25};
  int i;
  for(i=0;i<5;i++)
  {
    printf("Value of arr[%d] = %d\t",i,arr[i]);
    printf("Address of arr[%d] = %p\n",i,&arr[i]);
  }
 }
