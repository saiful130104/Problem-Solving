#include <cstdio>
#include <cmath>
#include <iostream>
int vertbounch(int L, int V, int rad,int T);

int horzbounch(int W, int V, int rad,int T);

using namespace std;
const double convert = 3.141593 / 180;
int main()
{
    int wide,len,vel,time,rad,vert,horz;
    while(1){
        cin>>len>>wide>>vel>>rad>>time;
        if(len == 0 && wide == 0 && vel == 0 && rad == 0 && time == 0)
            break;
        vert = vertbounch(len,vel,rad,time);
        horz = horzbounch(wide,vel,rad,time);
        cout<<vert<<" "<<horz<<endl;
    }

    return 0;
}

int vertbounch(int L, int V, int rad,int T)
{
    int res = (L+V*T*cos(rad*convert)) / (2*L);
    return res;
}

int horzbounch(int W, int V, int rad,int T)
{
    int res = (W+V*T*sin(rad*convert)) / (2*W);
    return res;
}
