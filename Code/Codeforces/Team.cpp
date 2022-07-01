#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,sum=0,fin=0;;
    cin>>n;
    while(n--)
    {  sum=0;
        for(int i=0;i<3;i++)
        {
            cin>>m;
            sum=sum+m;
        }

        if(sum>=2)
        fin++;
    }


   cout<<fin; 

    return 0;
}