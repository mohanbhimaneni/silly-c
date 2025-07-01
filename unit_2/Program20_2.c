//To display grade when entered marks using if, else-if and else statements
#include<stdio.h>
int main()
{
    int marks;
    printf("Enter the marks\n");
    scanf("%d",&marks);
    if (marks>=90&&marks<=100)
    printf("Your grade is A+");
    else if(marks<90&&marks>=80)
    printf("Your grade is A");
    else if(marks<80&&marks>=70)
    printf("Your grade is B");
    else if(marks<70&&marks>=60)
    printf("Your grade is C");
    else if(marks<60&&marks>=50)
    printf("Your grade is D");
    else if(marks<50&&marks>=40)
    printf("Your grade is E");
    else if(marks<40&&marks>=35)
    printf("Your grade is F");
    else if(marks<35&&marks>=0)
    printf("Sorry! You failed!!");
    else
    printf("Enter valid marks");
    return 0;
}