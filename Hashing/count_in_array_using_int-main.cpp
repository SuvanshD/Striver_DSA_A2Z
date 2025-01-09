#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin >> n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    // Preprocessing
    int hash[13] = {0};

    for (int i = 0; i < n ; i++)
    {
        hash[arr[i]] += 1;
    }
    

    //Fetching 
    int m;
    cin >> m;

    while(m--)
    {
        int num;
        cin>>num;
        cout<<num<<"-"<<hash[num]<<endl;
    }

    return 0;

}
