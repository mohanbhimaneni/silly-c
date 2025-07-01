/*To test a point (x,y)lies in 1st, 2nd, 3rd, 4th quadrant, x-axis, y-axis or origin*/
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the coordinates of the point\n");
    scanf("%d %d",&x,&y);
    if (x==0&&y==0)
    printf("The point lies on the origin");
    else if (x!=0&&y==0)
    printf("The point lies on x-axis");
    else if (x==0&&y!=0)
    printf("The point lies on y-axis");
    else if (x>0&&y>0)
    printf("The point lies in the first quadrant");
    else if (x<0&&y>0)
    printf("The point lies in the second quadrant");
    else if (x<0&&y<0)
    printf("The point lies in the third quadrant");
    else if (x>0&&y<0)
    printf("The point lies in the fourth quadrant");
    else
    printf("Error, invalid values detected!!");
    return 0;
}