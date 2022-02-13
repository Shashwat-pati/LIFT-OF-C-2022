#include<stdio.h>
#define PI 3.14
void main()
{
    float rad,dia,area,cf;
    printf("Enter radius of circle-");
    scanf("%f",&rad);
    dia=rad*2;
    area=PI*rad*rad;
    cf=2*PI*rad;
    printf("Diameter of circle is- %f\n",dia);
    printf("Area of circle is - %f\n",area);
    printf("Circumference of circle is - %f\n",cf);
}
