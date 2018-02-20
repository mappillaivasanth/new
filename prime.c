#include <stdio.h>
int main()
{
    int n,not_prime=0;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    for(int i=2;i<n;++i)
    {
        if(n%i==0)
        {
            not_prime=1;
            break;
        }
    }
    if (not_prime==0) 
        printf("%d is a prime number",n);
    else
        printf(" %d is  not a prime number",n);
    return 0;
    }
    
