# include <stdio.h>
int main(void)
{
    int choice,a,b;
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("5.Remainder\n");
    printf("Enter  your choice:");
    scanf("%d",&choice);
    printf("Enter two integers:");
    scanf("%d %d",&a,&b);
    switch(choice)
    {
    case1:
    printf("Result = %d\n",a+b);
    break;
    case2:
    printf("Result =%d\n",a-b);
    break;
    case3:
    printf("Result =5d\n",a*b);
    break;
    case4:
    if(b!=0)
    printf("Result=%d\n",a/b);
    else
    printf("Division by zero is not allowed.\n");
    break;
    case5:
    if(b!=0)
    printf("Result=%d\n",a%b);
    else
    printf("Remainder with zero division is not allowes.\n");
    break;
    default:
    printf("Invalid choice.\n");
    }
    return 0;
    }