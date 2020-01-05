#include<bits/stdc++.h>

using namespace std;

int dp[50][1005],weight[51],value[51];

int knapsack(int total_weight, int item)
{
    for(int i=0; i<=item; i++)  dp[i][0]=0;
    for(int i=0; i<=total_weight; i++)  dp[0][i]=0;
    for(int i=1; i<=item; i++)
    {
        for(int j=1; j<=total_weight; j++)
        {
            if(j<weight[i])
                dp[i][j] = dp[i-1][j];
            else
                dp[i][j] = max(value[i]+dp[i-1][j-weight[i]],dp[i-1][j]);
        }
    }
    ///printing the dp array for debugging
   /*for(int i=1; i<=item; i++)
    {
        for(int j=1; j<=total_weight; j++)
           cout<<dp[i][j]<<" ";
        cout<<endl;
    }*/
    return dp[item][total_weight];
}

 ///dp solution print
void solution_print(int total_weight, int item)
{
        printf("The items are taken:\n");
    int total_value= dp[item][total_weight];
    while(total_value>0)
    {
        if(total_value==dp[item-1][total_weight])
        {
            item--;
            continue;
        }
        printf("%dth item which weight =  %d and  value =  %d\n",item,weight[item],value[item]);  ///we can get a vector or array for listing the items..
        total_value -=value[item];
        total_weight -= weight[item];
         item--;
    }
}
int main()
{
    int total_weight,item;
    scanf("%d",&total_weight);
    scanf("%d",&item);
    for(int i=0; i<item; i++)
        scanf("%d",weight+i+1);
    for(int i=0; i<item; i++)
        scanf("%d",value+i+1);
    int res = knapsack(total_weight,item);
    cout<<res<<endl;
    solution_print(total_weight,item);
    return 0;
}
