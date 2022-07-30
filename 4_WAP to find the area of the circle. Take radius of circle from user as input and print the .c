#include<stdio.h>
int main()
{
    int r;
    float area;
    printf("Enter a radius : ");
    scanf("%d",&r);

    area = 3.14 * r * r;

    printf("The area of circle is : %.2f having the radius %d",area,r);

    return 0;
}