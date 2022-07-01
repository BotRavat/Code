#include <bits/stdc++.h>
using namespace std;

struct Seq
{
    int start, profit;
};

bool cmp(struct Seq a, struct Seq b)
{
    return (a.profit > b.profit);
}

int MaxProfit(vector<Seq> arr, int n)
{
    sort(arr.begin(), arr.end(), cmp);
    int m = n, maxprofit = 0;
    int res[n];
    for (int i = 0; i < n; i++)
        res[i] = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = min(n,arr[i].start)-1 ; j >=0; j--)
        {
            if (res[j] == 0)
            {
                maxprofit += arr[i].profit;
                res[j] = 1;
                break;
            }
        }
    }

    return maxprofit;
}
int main()
{
    int n;
    cin >> n;

    vector<Seq> arr(n);
    for (int i = 0; i < n; i++)
    {
        int st, en;
        cin >> st >> en;
        arr[i].start = st;
        arr[i].profit = en;
    }

    cout << MaxProfit(arr, n);

    return 0;
}