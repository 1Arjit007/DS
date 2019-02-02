#include<stdio.h>
void main()
{
  int a=5;
  int *pa;
  int **ppa;
  pa = &a;
  ppa = &pa;
  printf("Address of a = %p\n",&a);
  printf("Value of pa = Address of a = %p\n",pa);
  printf("value of *pa = Value of a = %d\n",*pa);
  printf("Address of pa = %p\n",&pa);
  printf("value of ppa = Address of pa = %p\n",ppa);
  printf("values of *ppa = value of pa =%p\n",*ppa);
  printf("Value of **ppa = value of a = %d\n",**ppa);
  printf("Address of ppa = %p\n",&ppa);
}
