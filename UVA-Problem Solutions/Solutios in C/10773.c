#include <stdio.h>
#include <math.h>

int  main()
{
   int n,test_case=1;
   float r_width,r_flow,b_velocity,tmax,tmin,dif,temp1,temp2,temp3;
    scanf("%d",&n);
    while(n--){
        scanf("%f%f%f",&r_width,&r_flow,&b_velocity);
        if(r_flow>=b_velocity || r_flow == 0 || b_velocity == 0){
            printf("Case %d: can't determine\n",test_case++);
        }
        else{
            temp1 = b_velocity*b_velocity;
            temp2 = r_flow*r_flow;
            temp3 = temp1 - temp2;
            temp1 = sqrt(temp3);
            tmax = r_width/temp1;
            tmin = r_width/b_velocity;
            dif = (tmax - tmin);
            printf("Case %d: %.3f\n",test_case++,dif);
        }
    }

    return 0;
}
