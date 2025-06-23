//Converting octal number to decimal and hexadecimal
#include <stdio.h>
int main()
{
    int oct_num;
    printf("Enter an octal number using digits 0 to 7:");
    scanf("%o",&oct_num);
    printf("The equivalent decimal number is :%d\n", oct_num);
    printf("The equivalent hexadecimal number is :%x\n", oct_num);
    return 0;
}//main