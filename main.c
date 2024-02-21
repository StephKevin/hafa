#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void resolution(double a, double b, double c)
{
    double det = b*b - (4*a*c);
    double x1, x2;
    if (det==0)
    {
        x1 = -b/(2*a);
        printf("La solution est x=%lf\n",x1);
    }
    else if(det>0)
    {
        x1=(-b+sqrt(det))/(2*a);
        x2=(-b-sqrt(det))/(2*a);
        printf("les solutions sont x1=%lf et x2=%lf\n",x1,x2);
    }
    else {
        printf("solution impossible");
    }
}
int main()
{
    double a, b, c;
    printf("entrez a, b, et c:\n");
    scanf("%lf %lf %lf",&a,&b,&c);
    resolution(a,b,c);



    return 0;
}
