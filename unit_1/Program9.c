//To add, subtract, multiply,divide and find quotient and remainders of two numbers
//To find the square root of the first number
//To find first number power second number
#include<stdio.h>
#include<math.h>
int main()
{
    float num1,num2;
    printf("Enter the two numbers\n");
    scanf("%f %f",&num1,&num2);
    printf("The sum of the two numbers is:%f\n",num1+num2);
    printf("The difference of the two numbers is:%f\n",num1-num2);
    printf("The product of the two numbers is :%f\n",num1*num2);
    printf("The quotient of the two numbers is :%f\n",num1/num2);
    printf("The remainder of the two numbers is :%d\n",(int)num1%(int)num2);
    printf("The square root of the first number is :%f\n",sqrt(num1));
    printf("The value of first number power second number is %f\n",pow(num1,num2));
    return 0;
}