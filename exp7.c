#include <stdio.h>
int main()
{
int n,i,num,sum=0;
scanf("%d",&n);
for(i=1; i<=n; i++)
{
printf("Enter number %d: ",i);
scanf("%d", &num);
sum = sum + ( num * num );
}
printf("sum of squares = %d\n", sum);
return 0 ;
}

