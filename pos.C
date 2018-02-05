#include<stdio.h>
int main()
{
  int a;
  printf("Enter the value:\n",a);
  scanf("%d",&a);
  if(a<0)
  {
    printf("The value %d is negative!!!\n",a);
  }
  if(a>0)
  {
    printf("The value %d is positive!!!\n",a);
  }
  if(a==0)
  {
    printf("The number is zero!!!!\n",a);
  }
  return 0;
}
