#include <bits/stdc++.h>

using namespace std;



int main()
{
    string s;
    cin >> s;
    

    // Preprocessing
    int hashh[256] = {0};

    for (int i = 0; i < s.size() ; i++)
    {
        hashh[s[i]] += 1;
    }
    

    //Fetching 
    int m;
    cin >> m;

    while(m--)
    {
        char c;
        cin>>c;
        cout<<c<<"-"<<hashh[c]<<endl;
    }

    return 0;

}
