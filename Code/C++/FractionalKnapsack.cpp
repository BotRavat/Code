#include<bits/stdc++.h>
using namespace std;

struct Knap
{
    int weight,profit;

};

bool cmp(struct Knap a,struct Knap b)
{
   
    double r1=(double)a.profit/(double)a.weight;
    double r2=(double)b.profit/(double)b.weight;

    return r1>r2;
}

double fraknap(int w,struct Knap arr[],int n)
{   double prof=0.0;

 sort(arr,arr+n,cmp);

      for(int i=0;i<n;i++)
      {
        if(arr[i].weight<=w)
        {
            w=w-arr[i].weight;
            prof=prof+arr[i].profit;
        }  

        else
          {
             prof= prof+arr[i].profit*((double)w/(double)arr[i].weight); 
             return prof;
             break; 
           
          }
      }

      return prof;
    
}

int main()
{
    int n,w;
    cin>>w>>n;
    Knap arr[n];
    
    for(int i=0;i<n;i++)
    cin>>arr[i].profit>>arr[i].weight;
     
     cout<<fraknap(w,arr,n);


     return 0;

}