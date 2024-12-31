#include <bits/stdc++.h>

using namespace std;

void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << j + 1;
        }
        cout << endl;
    }
}

void pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

void pattern5(int n)
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j < n - i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern6(int n)
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j < n - i + 1; j++)
        {
            cout << j + 1;
        }
        cout << endl;
    }
}

void pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int a = 0; a < (n - i - 1); a++)
        {
            cout << " ";
        }
        for (int b = 0; b < (2 * i + 1); b++)
        {
            cout << "*";
        }
        for (int c = 0; c < (n - i - 1); c++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern8(int n)
{
    // for(int i=n;i>0;i--)
    // {
    //     for(int a=(n-i+1); a>1;a--)
    //     {
    //         cout<<" ";
    //     }
    //     for(int b=2; b<(2*i+1);b++)
    //     {
    //         cout<<"*";
    //     }
    //     for(int c=(n-i+1); c>1;c--)
    //     {
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }

    for (int i = 0; i < n; i++)
    {
        for (int a = 0; a < i; a++)
        {
            cout << " ";
        }
        for (int b = 2 * (n - i) - 1; b > 0; b--)
        {
            cout << "*";
        }
        for (int a = 0; a < i; a++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern9(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int a = 0; a < (n - i - 1); a++)
        {
            cout << " ";
        }
        for (int b = 0; b < (2 * i + 1); b++)
        {
            cout << "*";
        }
        for (int c = 0; c < (n - i - 1); c++)
        {
            cout << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int a = 0; a < i; a++)
        {
            cout << " ";
        }
        for (int b = 2 * (n - i) - 1; b > 0; b--)
        {
            cout << "*";
        }
        for (int a = 0; a < i; a++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern10(int n)
{
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    for (int i = 1; i < 2 * n; i++)
    {
        if (i <= n)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
        else
        {
            for (int j = 1; j <= 2 * n - i; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
}

void pattern11(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            for (int j = 1; j <= i; j++)
            {
                if (j % 2 == 1)
                {
                    cout << 1;
                }
                else
                {
                    cout << 0;
                }
            }
        }
        else
        {
            for (int j = 1; j <= i; j++)
            {
                if (j % 2 == 1)
                {
                    cout << 0;
                }
                else
                {
                    cout << 1;
                }
            }
        }
        cout << endl;
    }
}

void pattern12(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int a = 1; a <= i; a++)
        {
            cout << a;
        }
        for (int b = 1; b <= 2 * (n - i); b++)
        {
            cout << " ";
        }
        for (int c = i; c > 0; c--)
        {
            cout << c;
        }
        cout << endl;
    }
}

void pattern13(int n)
{
    int val = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << val << " ";
            val++;
        }
        cout << endl;
    }
}

void pattern14(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= ('A' + i); ch++)
        {
            cout << ch;
        }
        cout << endl;
    }
}

void pattern15(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + (n - i - 1); ch++)
        {
            cout << ch;
        }
        cout << endl;
    }
}

void pattern16(int n)
{
    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ch;
        }
        ch++;
        cout << endl;
    }
}

void pattern17(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int a = 0; a < (n - i - 1); a++)
        {
            cout << " ";
        }

        int val_num = 2 * i + 1;
        char ch = 'A';

        for (int b = 0; b <= val_num / 2; b++)
        {
            cout << ch++;
        }
        ch-=2;

        for (int b = val_num / 2 + 1; b < val_num; b++)
        {
            cout << ch;
            ch--;
        }

        for (int c = 0; c < (n - i - 1); c++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern18(int n)
{
    char ch='A'+n-1;
    for (int i = 1; i <= n; i++)
    {
        for (char j = ch-i+1; j <= ch ; j++)
        {
            cout<<j;
        }
        cout << endl;
    }
}

void pattern19(int n)
{
    int space=0;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<"*";
        }
        for(int k=0;k<space;k++)
        {
            cout<<" ";
        }
        for(int j=1;j<=n-i;j++)
        {
            cout<<"*";
        }
        space+=2;
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        space-=2;
        for(int j=1;j<=i+1;j++)
        {
            cout<<"*";
        }
        for(int k=0;k<space;k++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i+1;j++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }
}

void pattern20(int n) 
{
    int spaces=2*n-2;
    for(int i=1;i<=2*n-1;i++)
    {
        int stars=i;
        if(i>n) stars = 2*n-i;

        for(int j=1;j<=stars;j++)
        {
            cout<<"*";
        }

        for(int k=0;k<=spaces;k++)
        {
            cout<<" ";
        }

        for(int j=1;j<=stars;j++)
        {
            cout<<"*";
        }
        cout<<endl;
        if(i<n) spaces-=2;
        else spaces+=2;
    }
}

void pattern21(int n)
{
    // for(int i=0;i<n;i++)
    // {
    //     if(i==0 || i==n-1)
    //     {
    //         for(int j=0;j<n;j++)
    //         {
    //             cout<<"*";
    //         }
    //     }
    //     else
    //     {
    //         cout<<"*";
    //         for(int k=0;k<n-2;k++)
    //         {
    //             cout<<" ";
    //         }
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0 || i==n-1 || j==0 || j==n-1)
            {
                cout<<"*";
            }
            else cout<<" ";
        }
        cout<<endl;
    }
}

void pattern22(int n)
{
    for(int i=0;i<2*n-1;i++)
    {
        for(int j=0;j<2*n-1;j++)
        {
            int top=i;
            int bottom=2*n-2-i;
            int left=j;
            int right=2*n-2-j;

            cout<<n-min(min(top,bottom),min(left,right));
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cin >> n;
    pattern21(n);
    return 0;
}