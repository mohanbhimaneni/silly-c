//Converting a hexadecimal number to its equivalent decimal and octal numbers
#include<stdio.h>
int main()
{
    int hex_num;
    printf("Enter a hexadecimal number using digits 0 to 9 and letters a to f :");
    scanf("%x",&hex_num);
    printf("The equivalent decimal number is : %d \n",hex_num);
    printf("The equivalent octal number is: %o \n", hex_num);
    return 0;
}