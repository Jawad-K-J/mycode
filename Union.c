#include <stdio.h>
union test {
    int x, y;
};
  
void main()
{
union test t;
printf("Enter the value of X: ");
scanf("%d",&t.x);
printf("After Entering X = %d:\n x = %d, y = %d\n",t.x,t.x, t.y);
printf("\nEnter the value of Y: ");
scanf("%d",&t.y);
printf("After Entering Y = %d:\n x = %d, y = %d\n",t.y,t.x, t.y);
}
