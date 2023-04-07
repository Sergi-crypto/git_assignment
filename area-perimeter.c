#include <stdio.h>
#include <stdlib.h>

double perimeter_square(double a);
double area_square(double a);
double perimeter_c(double r);
double area_c(double r);

double perimeter_square(double a)
{
    double result=4*a;
    return result;

}
double area_square(double a)
{
    double result=a*a;
    return result;

}
double perimeter_c(double r)
{
    double result=2*3.14159*r;
    return result;

}
double area_c(double r)
{
    double result=3.14159*r*r;
    return result;

}



int main()
{
    char type;
    scanf("%s",&type);
    if(type=='x')
    {
        double a;
        scanf("%lf",&a);
        double perimeter=perimeter_square(a);
        double area=area_square(a);
        printf("%.1lf %.1lf",perimeter,area);

    }
    else if(type=='y')
    {
        double r;
        scanf("%lf",&r);
        double perimeter=perimeter_c(r);
        double area=area_c(r);
        printf("%.1lf %.1lf",perimeter,area);

    }

    return 0;
}