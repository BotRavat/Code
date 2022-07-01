#include<bits/stdc++.h>
using namespace std;

struct Activity
{
    int start,end;
};

bool cmp(struct Activity a,struct Activity b)
{
    return (a.end<b.end);
}

int SelectMax(struct Activity act[],int n)
{
    sort(act,act+n,cmp);
    
    int max=1;int j=0;

    for(int i=1;i<n;i++)
    {
        if(act[i].start>=act[j].end)
        {max++;
          j=i;
        }
    }
    return max;
}

int main()
{
    int n;
    cin>>n;
    struct Activity act[n];

    for(int i=0;i<n;i++)
     cin>>act[i].start>>act[i].end;

     cout<<SelectMax(act,n);

     return 0;
}