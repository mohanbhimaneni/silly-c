//To find largest of three numbers using ternary operator
#include<stdio.h>
int main()
{
    int a,b,c,var1,var;
    printf("Enter the three numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    var1=a>b?a:b;
    var=var1>c?var1:c;
    printf("The greatest value among the three numbers is %d",var);
    return 0;
}