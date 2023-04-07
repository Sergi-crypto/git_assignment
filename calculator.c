#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void sum(double x,double y);
void sub(double x,double y);
void multiplication(double x,double y);
void division(double x,double y);
void squareroot(double x);
void power(double n,int m);



void sum(double x,double y)
{
    double result=x+y;
    printf("%.2lf",result);
}

void sub(double x,double y)
{
    double result=x-y;
    printf("%.2lf",result);
}

void multiplication(double x,double y)
{
    double result=(double)x*y;
    printf("%.2lf",result);
}

void division(double x,double y)
{
    double result=(double)x/y;
    printf("%.2lf",result);
}

void squareroot(double x)
{
    double result=sqrt(x);
    printf("%.2lf",result);
}

void power(double n,int m)
{
    double result=pow(n,m);
    printf("%.2lf",result);
}


int main()
{
    char operation;
    scanf("%c",&operation);

    if(operation=='+')
    {
        double x,y;
        scanf("%lf%lf",&x,&y);
        sum(x,y);
    }
    else if(operation=='-')
    {
        double x,y;
        scanf("%lf%lf",&x,&y);
        sub(x,y);
    }
    else if(operation=='*')
    {
        double x,y;
        scanf("%lf%lf",&x,&y);
        multiplication(x,y);
    }
    else if(operation=='/')
    {
        double x,y;
        scanf("%lf%lf",&x,&y);
        division(x,y);
    }
    else if(operation=='s')
    {
        double x;
        scanf("%lf",&x);
        squareroot(x);
    }
    else if(operation=='p')
    {
        int m;
        double n;
        scanf("%lf%d",&n,&m);
        power(n,m);
    }

    return 0;
}