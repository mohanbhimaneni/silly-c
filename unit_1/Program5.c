//To find the area and perimeter of a rectangle
#include<stdio.h>
int main()
{
    float length, breadth;
    printf("Enter the length of the rectangle:");
    scanf("%f",&length);
    printf("Enter the breadth of the rectangle:");
    scanf("%f",&breadth);
    printf("The area of rectangle is :%f\n",length*breadth);
    printf("The perimeterof rectangle is: %f\n",2*(length+breadth));
    return 0;
}