#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,data,sum=0;
    cin>>n>>k;
    vector<int>score;
   for(int i=0;i<n;i++)
    {
       cin>>data;
       score.push_back(data);
    }

    for(int i=0;i<n;i++)
     if(score[i]>=score[k-1] &&score[i]!=0)
        sum++;
       cout<<sum;


       return 0;  


}