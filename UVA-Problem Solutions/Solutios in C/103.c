#include <stdio.h>
#include <math.h>
int main()
{
    double p,n,res;

    while(scanf("%lf%lf",&n,&p) != EOF){
        res = pow(p,1/n);
        printf("%.0lf\n",res);
    }

    return 0;
}
