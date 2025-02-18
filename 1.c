#include<stdio.h>
int main()
{
    int n,digit,sum=1;
    printf("enter the number");
    scanf("%d",&n);
    while(n!=0)
    {
        digit=n%10;//digit=5
        sum=sum+n ;//sum=5
        n=n/10;//n=14
    }
    printf("sum of digit%d",sum);
    return 0;
}
