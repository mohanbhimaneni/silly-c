//To find a largest of two numbers
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers \n");
    scanf("%d %d",&a,&b);
    if (a>b)
        printf("The greatest number is %d\n",a);
    else
        printf("The greatest number is %d\n",b);
    return 0;
}