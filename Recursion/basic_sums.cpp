#include <bits/stdc++.h>

using namespace std;

int counts = 0;

// Print Name N times
void f(int i, int n)
{
    if (i > n)
        return;
    cout << "Raj" << endl;
    f(i + 1, n);
}

// Print form 1-N
void f2(int i, int n)
{
    if(i>n) return;
    cout<<i<<" ";
    f2(i+1,n);
}

//Print from N-1
void f3(int i, int n)
{
    if(i>n) return;
    cout<<n<<" ";
    f2(i,n-1);
}

void f4(int i, int n)
{
    if(i>n) return;
    f2(i,n-1);
    cout<<n<<" ";
} 

void f5(int i, int n)
{
    if(i>n) return;
    f5(i+1,n);
    cout<<i<<" ";
}

int main()
{
    // f,f2,f3
    int n;
    cin >> n;
    f5(1, n);
    return 0;
}
