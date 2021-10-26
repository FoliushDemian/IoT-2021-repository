#include <stdio.h>
#include <math.h>

void main(void)
{
    double a,b,h,z,x;
    printf("input a ");
    scanf("%lf", &a);
    printf("input b ");
    scanf("%lf", &b);
    printf("input h ");
    scanf("%lf", &h);
    for( x = a; x<=b+h; x = x+h)
    {
        if(x<3)
            {
                z = log10(fabsl(log(x)+1/cos(x)));
                printf("x: %lf; y: %lf\n", x, z);
            }
         else if(x>=3 && x<4)
            {
                z = cos(x+log(x))/sin(x+log(x));
                printf("x: %lf; y: %lf\n", x, z);
            }
        else if(x>=4)
            {
                z = 1/(16-pow(x,2));
                printf("x: %lf; y: %lf\n", x, z);            ;
            }
    }
}