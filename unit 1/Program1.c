//To convert the given decimal number to octal and hexadecimal numbers
#include <stdio.h>
int main()
{
    int decimal_number;
    printf("Enter a positive decimal number:");
    scanf("%d",&decimal_number);
    printf("The equivalent octal number is : %o\n",decimal_number);
    printf("The equivalent hexadecimal number is : %x",decimal_number);
    return 0;
}//main