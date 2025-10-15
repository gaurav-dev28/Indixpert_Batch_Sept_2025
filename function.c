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
    printf("Sum: %d",a+b);
}
int main()
{
    add();

    return 0;
}