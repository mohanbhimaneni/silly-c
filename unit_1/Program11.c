//Swapping two variables without using a temporary variable
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the values of a and b\n");
    scanf("%d %d",&a,&b);
    printf("The values of a and b before swapping are \na=%d\nb=%d\n",a,b);
    a=a*b/(b=a);
    printf("The values of a and b after swapping are \na=%d\nb=%d\n",a,b);
    return 0;
}