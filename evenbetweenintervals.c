#include<stdio.h>
int main()
{
int i,m,n;
printf("enter the range of two mumbers :\n");
scanf("%d %d ",&m,&n);
printf("The even number between %d and %d are\n",m,n);
for(i=m;i<=n;++i)
{
    if(i%2==0)
    printf("%d\t",i);
}
return 0;
}

