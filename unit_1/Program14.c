//To test whether a number is even or odd
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number:\n");
    scanf("%d",&a);
    a%2==0?printf("The number is even\n"):printf("The number is odd\n");
    return 0;
}