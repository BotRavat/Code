// #include <bits/stdc++.h>
// using namespace std;
//  int main() {
//    int t,n,x,y,data,i;
//    vector<int>arr;

//    cin>>t;
//    while(t--)
//    {
//      cin>>n>>x>>y;
// 	 for(i=0;i<n;i++)
// 	 {
// 		 cin>>data;
// 		 arr.push_back(data);
// 	 }

// 	for(i=0;i<n-1;i++) 
// 	{
// 		if((arr[i]+arr[i+1])==1)
// 		{
// 			cout<<"0";
// 			break;
// 		}else if(arr[i]+arr[i+1]==0)
// 		   {
// 			   if(x<=y)
// 			   cout<<x;
// 			   else
// 			   cout<<y;
// 			   break;
// 		   }
// 		  else
//           {
// 			  cout<<y;
// 			  break;
// 		  }
// 	}

//     arr.clear();

	
//    }
// int a=gcd(100,150);
// cout<<a;
//  }






// // C/C++ program to solve fractional Knapsack Problem
// #include <bits/stdc++.h>

// using namespace std;

// // Structure for an item which stores weight and
// // corresponding value of Item
// struct Item {
// 	int value, weight;

// };

// // Comparison function to sort Item according to val/weight
// // ratio
// bool cmp(struct Item a, struct Item b)
// {
// 	double r1 = (double)a.value / (double)a.weight;
// 	double r2 = (double)b.value / (double)b.weight;
// 	return r1 > r2;
// }

// // Main greedy function to solve problem
// double fractionalKnapsack(int W, struct Item arr[], int n)
// {
// 	// sorting Item on basis of ratio
// 	sort(arr, arr + n, cmp);


// 	double finalvalue = 0.0; // Result (value in Knapsack)

// 	// Looping through all Items
// 	for (int i = 0; i < n; i++) {
// 		// If adding Item won't overflow, add it completely
// 		if (arr[i].weight <= W) {
// 			W -= arr[i].weight;
// 			finalvalue += arr[i].value;
// 		}

// 		// If we can't add current Item, add fractional part
// 		// of it
// 		else {
// 			finalvalue
// 				+= arr[i].value
// 				* ((double)W / (double)arr[i].weight);
// 			break;
// 		}
// 	}

// 	// Returning final value
// 	return finalvalue;
// }

// // Driver code
// int main()
// {
// 	int W = 50; // Weight of knapsack
//     int m;cin>>m;
// 	Item arr[m] ;//= { { 60, 10 }, { 100, 20 }, { 120, 30 } };
//      for(int i=0;i<m;i++)
//      {
//         cin >> arr[i].value;
//         cin >> arr[i].weight;
//      }
// 	int n = sizeof(arr) / sizeof(arr[0]);

// 	// Function call
// 	cout << "Maximum value we can obtain = "
// 		<< fractionalKnapsack(W, arr, n);
// 	return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// void printactivity(int s[],int f[],int n){
// int i,j;
// i=0;
// cout<<" "<<i;
// for(int j=0;j<n;j++){
// 	if(s[j]>=s[i]){
// 	cout<<" "<<j;
// 	i=j;
// 	}
// }

// }
// int main(){
// 	int s[]={3,5,6,7,8,7};
// 	int f[]={5,6,8,4,7,8};
// 	int n=6;
// 	printactivity(s,f,n);
// }


// #include<bits/stdc++.h>
// using namespace std;

// struct job{
// int id;
// int profit;
// int deadline;
// };
// bool cmp(job a,job b){
// return (a.profit>b.profit);
// }

// void jobscheduling(job arr[],int n){
// sort(arr,arr+n,cmp);
// int result[n];
// bool slot[n];

// for(int i=0;i<n;i++)
//    {

//    slot[i]=false;
//    }
//     for(int i=0;i<n;i++)
//    {
//         for(int j=min(n,arr[i].deadline)-1;j>=0;j--)
//         {
//             if(slot[j]==false)
//                 {
//                     result[j]=i;
//                 slot[j]=true;
                
//             break;
//                 }
//         }
//     }

// for(int i=0;i<n;i++)
//     {
//     if(slot[i])
//         cout<<arr[result[i]].id<<" ";
//    }
// }
// int main(){
// int n;
// cin>>n;
// struct job arr[n];
// for(int i=0;i<n;i++)
//     {

//      cin>>arr[i].profit>>arr[i].deadline;
//      arr[i].id=i+1;
//     }
//      jobscheduling(arr,n);
//      return 0;
// }


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,k,s,m;
    cin>>t;
    while(t--)
    {
       cin>>n>>k>>s;
       m=(k*s)/n;
       if((k*s)%n!=0)
        m=m+1;
        
        if(m<=6)
        cout<<m<<endl;
        else                                                                    
        cout<<"-1"<<endl;
    }
    return 0;
}

