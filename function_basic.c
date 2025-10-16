#include<stdio.h>
int add()
{
    int a, b;
    int sum=0;
    printf("Please enter your first number: ");
    scanf("%d",&a);
    printf("Please enter your second number: ");
    scanf("%d",&b);
    sum=a+b;
    printf("Sum: %d\n",a+b);
}
int Subtract()
{
    int a, b;
    int subtract=0;
    printf("Please enter your first number: ");
    scanf("%d",&a);
    printf("Please enter your second number: ");
    scanf("%d",&b);
    subtract=a-b;
    printf("Subtract: %d",a-b);
}
int main()
{
    add();
    Subtract();

    return 0;
}