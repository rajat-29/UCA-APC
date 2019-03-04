#include <stdio.h>
#include <math.h>
/* Include other headers as needed */
int main()
{
  int test,num;
  double root;
  scanf("%d",&test);
  for(int i=0;i<test;i++)
  {
    scanf("%d",&num);
    root = sqrt(num);
    printf("%.2lf\n",root);
  }
    return 0;
}
