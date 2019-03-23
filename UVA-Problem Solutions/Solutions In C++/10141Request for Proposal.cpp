#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,p,cs=1;
    while (cin >> n >> p, p || n)
    {
        double price = 2000000000,temp_price;
        int req, reqmet = -1;
        string req_name,temp_name,proposal;
        for(int i=0; i<n; i++)
        {
            cin.ignore();
            getline(cin,proposal);
        }
        while(p--)
        {
            getline(cin,temp_name);
            scanf("%lf %d",&temp_price,&req);
            if(req>reqmet)
            {
                price = temp_price;
                reqmet = req;
                req_name = temp_name;
            }
            else if(req==reqmet && temp_price<price)
            {
                price = temp_price;
                reqmet = req;
                req_name = temp_name;
            }
            cin.ignore();
            for(int i=0; i<req; i++)
            {
                getline(cin,proposal);
            }
        }
        if(cs>1) cout<<endl;

        cout << "RFP #" << cs++ << endl;
        cout<<req_name<<endl;
    }

    return 0;
}
