//To find the volume of a sphere
#include<stdio.h>
#include<math.h>
#define PI 3.14159
int main()
{
    float radius;
    printf("Enter the radius of the sphere:");
    scanf("%f",&radius);
    /*
    This statement is throwing an indirect error i.e.,
    it is displaying a wrong value...
    */
    printf("The volume of the sphere is: %f\n",4/3*PI*pow(radius,3));
    printf("%f",pow(radius,3));
    printf("%f",PI);
    return 0;
}