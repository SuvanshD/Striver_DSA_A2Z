#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;

    int arr[n];
    for(int i=0 ; i<n; i++)
    {
        cin >> arr[i];
    }

    // Pre computing the frequency of each element
    map<int,int> mpp;
    for(int i=0; i<n;i++)
    {
        mpp[arr[i]]++;
    }

    // fetching
    int q;
    cin >> q;

    while(q--)
    {
        int x;
        cin>>x;
        cout<<x<<"-"<<mpp[x]<<endl;
    }



    return 0;

}
