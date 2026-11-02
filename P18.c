# include<stdio.h>
int gcd(int a,int b)
{
    int temp;
    while(b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    return 0;
}
int LCM(int a,int b)
{
    return(a/gcd(a,b))*b;
}
unsigned long long factorial(int n)
{
    if(n<=1)
    return 1;
    return n*factorial(n-1);
}
long long power(int x,int n)
{
    if(n==0)
    return 1;
    return x*power(x,n-1);
}
int main()
{
    int choice,a,b,n,x;
    printf("1.gcd\n");
    printf("2.LCM\n");
    printf("3.Factorial using recursion\n");
    printf("4.x raised to n using recursion\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case1:
        printf("Enter two positive integers:");
        scanf("%d%d",&a,&b);
        if(a<=0||b<=0)
        printf("Enter positive integers only.\n");
        else
        printf("gcd=%d\n",gcd(a,b));
        break;
        case2:
        printf("Enter two positive integers:");
        scanf("%d%d",&a,&b);
        if(a<=0||b<=0)
        printf("Enter positive integers onliy.\n");
        else
        printf("LCM=%d|n",LCM(a,b));
        break;
        case3:
        printf("Enter a non positive integer from 0to20:");
        scanf("%d",&n);
        if(n<0||n>20)
        printf("Enetr a value from 0to20.\n");
        else
        printf("Factorial=%llu\n",factorial(n));
        break;case4:
        printf("Enter xand a non negative power n:");
        scanf("%d%d",&x,&n);
        if(n<0)
        printf("Power must be non negative .\n");
        else
        printf("Result=%lld\n",power(x,n));
        break;
        default:
        printf("Invalid choice.\n");
    }
    return 0;
}