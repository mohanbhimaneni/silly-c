//Swapping two variables using a temporary variable
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the first number\n");
    scanf("%d",&a);
    printf("Enter the second number\n");
    scanf("%d",&b);
    int temp;
    printf("Before swapping, the values of a and b are\na=%d\nb=%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("After swapping, the values of a and b are \na=%d\nb=%d\n",a,b);
    return 0;
}