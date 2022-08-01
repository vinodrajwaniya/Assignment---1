#include<stdio.h>

int main()
{
    int k;
    float A;
    printf("Enter radius: ");
    scanf("%d",&k);
    A=3.14*k*k;
    printf(" \“Area of circle is %.2f having the radius %d. Replace A %d with area & %.2f k with radius",A,k,k,A);
    return 0;
}
