#include <bits/stdc++.h>

using namespace std;

// Print sum of first n natural numbers

// Parameterized function to print sum of first n natural numbers
void f(int i, int sum)
{
    if (i < 1)
    {
        cout<<sum<<endl;
        return;
    }
    f(i-1 , sum+i);
}

//Functional programming using recursion for sum of first N natural nummbers
int f1(int n)
{
    if (n == 0) return 0;
    return n+f1(n-1);
}

//For factorials of a number
int f2(int n)
{
    if (n == 1) return 1;
    return n*f2(n-1);
}


int main()
{
    int n;
    cin >> n;

    //for parameter
    //f(n, 0);

    //for functional
    int final = f2(n);
    cout<<final;
    return 0;

}
