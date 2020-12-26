/* Given a point (x, y), write a program to find out if it lies on the
x-axis, y-axis or at the origin, viz. (0, 0).
Author Majid Mujahid Hussain dated 24/December/2020 */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    printf("Hello world!\n");
    int x,y;
    printf("Please enter the co-ordinates of the point (x,y): \n");
    scanf("%d %d", &x, &y);

    if(x == 0 && y != 0)
    {
        printf("The point(%d,%d) lies on the y-axis \n", x,y);
    }
    else if(x != 0 && y == 0)
    {
        printf("The point(%d,%d) lies on the x-axis \n", x,y);
    }
    else if(x == 0 && y == 0)
    {
        printf("The point(%d,%d) lies on the origin \n", x,y);
    }
    else
    {
        printf("Wrong Entry \n");
    }

    getch();
    return 0;
}
