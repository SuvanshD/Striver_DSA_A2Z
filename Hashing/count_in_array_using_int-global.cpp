#include <bits/stdc++.h>

using namespace std;

int hashh[10000000];

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

    for (int i = 0; i < n ; i++)
    {
        hashh[arr[i]] += 1;
    }
    

    //Fetching 
    int m;
    cin >> m;

    while(m--)
    {
        int num;
        cin>>num;
        cout<<num<<"-"<<hashh[num]<<endl;
    }

    return 0;

}
