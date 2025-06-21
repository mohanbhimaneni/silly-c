//To find largest of two numbers using ternary operator
#include<stdio.h>
int main()
{
    int a,b,var;
    printf("Enter the two numbers\n");
    scanf("%d %d",&a,&b);
    var=a>b?a:b;
    printf("The greater value is %d",var);
    return 0;
}