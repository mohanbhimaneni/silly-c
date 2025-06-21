//To display the grade when entered marks using switch statement
#include<stdio.h>
int main()
{
    int marks;
    printf("Enter your marks for a total of 100 \n");
    scanf("%d",&marks);
    switch (marks/10)
    {
    case 10:
    case 9:
        printf("Your grade is : A+");
        break;
    case 8:
        printf("Your grade is : A");
        break;
    case 7:
        printf("Your grade is : B");
        break;
    case 6:
        printf("Your grade is : C");
        break;
    case 5:
        printf("Your grade is : D");
        break;
    case 4:
        printf("Your grade is : E");
        break;
    case 3:
    case 2:
    case 1:
    case 0:
        printf("Sorry, you failed!!");
        break;
    default:
        printf("Invalid marks");
        break;
    }
}