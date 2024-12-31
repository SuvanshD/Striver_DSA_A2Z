#include <bits/stdc++.h>

using namespace std;

void pairs()
{
    cout << "PAIR:" << endl;

    // Basic declaration
    pair<int, int> p = {1, 2};

    cout << p.first << " " << p.second << endl;

    // Nested Pair
    pair<int, pair<int, int>> p1 = {1, {2, 3}};
    cout << p1.first << " " << p1.second.first << " " << p1.second.second << endl;

    // Pair Array
    pair<int, int> arr[] = {{1, 2}, {2, 3}, {3, 4}};
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << arr[i].first << " " << arr[i].second << endl;
    }
}

void vectors()
{
    cout << "VECTOR:" << endl
         << endl;

    // Basic Declaration - single integer
    vector<int> vec = {};

    vec.push_back(1);
    vec.emplace_back(2);

    for (auto it : vec)
    {
        cout << it << " ";
    }
    cout << endl
         << endl;

    // For pairs
    vector<pair<int, int>> vec1;

    vec1.push_back({1, 2});
    vec1.emplace_back(3, 4);
    for (auto it : vec1)
    {
        cout << it.first << " " << it.second << endl;
    }
    cout << endl;

    // Pre-inserted values
    vector<int> pre(5, 100);
    for (auto it : pre)
    {
        cout << it << " ";
    }
    cout << endl
         << endl;

    //Copying values of vec to new vector
    vector<int> copied(vec);

    for (auto it : copied)
    {
        cout << it << " ";
    }
    cout << endl << endl;

    //Access any value
    cout <<vec[0]<<" " << vec[1] << endl;

}

void iterators()
{
    cout << "ITERATORS:" << endl
         << endl;

    vector <int> v = {20,10,15,6,7};

    vector <int>::iterator it=v.begin();

    cout<<*(it) << endl;

    it+=2;
    cout<<*(it) << endl;

    //Print the last value
    auto last_val = v.end()-1;
    cout<<*(last_val)<<endl<<endl;

    // rend and end
    cout<<*(v.end()-1)<<" "<<*(v.rend()-1)<<endl;

    // rbegin and begin
    cout<<*(v.begin())<<" "<<*(v.rbegin())<<endl;

    //rback
    cout<<v.back()<<endl<<endl;

    //Print values
    for (vector <int>::iterator it=v.begin(); it!=v.end();it++)
    {
        cout<<*(it)<<" ";
    }
    cout<<endl<<endl;

    //2nd way
    for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<*(it)<<" ";
    }
    cout<<endl<<endl;

    //for each loop
    for(auto it:v)
    {
        cout<<it<<" ";
    }
    cout<<endl<<endl;

    //Erase single value
    v.erase(v.begin()+1);
    for(auto it:v)
    {
        cout<<it<<" ";
    }
    cout<<endl<<endl;

    //Erase multiple values
    v.erase(v.begin()+1,v.begin()+3);
    for(auto it:v)
    {
        cout<<it<<" ";
    }
    cout<<endl<<endl;

    //Insert
    v.insert(v.end(),5,100);
    for(auto it:v)
    {
        cout<<it<<" ";
    }
    cout<<endl<<endl;

    cout<<v.size()<<endl<<endl;

    //To pop
    v.pop_back();
    for(auto it:v)
    {
        cout<<it<<" ";
    }
    cout<<endl<<endl;

    //Clear all the values
    v.clear();
    for(auto it:v)
    {
        if(v.begin()==v.end()-1) cout<<0<<" ";
    }
    cout<<endl<<endl;

    //end
}

void stacks()
{
    cout<<"STACK:"<<endl<<endl;
    stack <int> st;

    st.push(1);
    cout<<st.size()<<" "<<st.top()<<endl;
    st.push(12);
    cout<<st.size()<<" "<<st.top()<<endl;
    st.push(12323);
    cout<<st.size()<<" "<<st.top()<<endl;

    st.pop();
    cout<<st.size()<<" "<<st.top()<<endl;
}

void pr_queue()
{
    cout<<"PRIORITY QUEUE:"<<endl<<endl;

    //Decreasing order
    priority_queue <int> pq;

    //Descending order or MAX HEAP
    cout<<"MAX HEAP"<<endl;
    pq.push(1);
    cout<<pq.size()<<" "<<pq.top()<<endl;
    pq.push(120000);
    cout<<pq.size()<<" "<<pq.top()<<endl;
    pq.push(12323);
    cout<<pq.size()<<" "<<pq.top()<<endl;

    pq.pop();
    cout<<pq.size()<<" "<<pq.top()<<endl<<endl;

    //Ascending order or MIN HEAP 
    cout<<"MIN HEAP"<<endl;
    priority_queue <int, vector<int>, greater<int>> pq1;
    pq1.push(1);
    cout<<pq1.size()<<" "<<pq1.top()<<endl;
    pq1.push(120000);
    cout<<pq1.size()<<" "<<pq1.top()<<endl;
    pq1.push(12323);
    cout<<pq1.size()<<" "<<pq1.top()<<endl;

    pq1.pop();
    cout<<pq1.size()<<" "<<pq1.top()<<endl;
}

void lower_bound(int X)
{
    cout<<endl<<"FIRST OCCURENCE of "<<X<<" is:";
    int a[] = {1,4,4,4,4,9,9,10,11};
    int n = sizeof(a)/sizeof(a[0]);

    int ind = lower_bound(a,a+n,X)-a;

    if(ind!=n && a[ind]==X) cout<< ind<<endl<<endl;
    else cout<<-1<<endl<<endl;

}

void occur()
{
    int X;
    cout<<"ENTER THE NUMBER TO FIND FIRST OCCURENCE OF IT IN THE ARRAY"<<endl;
    cin>>X;
    lower_bound(X);
    cout<<"ENTER THE NUMBER TO FIND FIRST OCCURENCE OF IT IN THE ARRAY"<<endl;
    cin>>X;
    lower_bound(X);
    cout<<"ENTER THE NUMBER TO FIND FIRST OCCURENCE OF IT IN THE ARRAY"<<endl;
    cin>>X;
    lower_bound(X);
}

void maps()
{
    cout<<"MAPS:"<<endl<<endl;
    map <int,int> mpp;

    // Insertion
    mpp[1] = 2;
    mpp.insert({3,2});

    //iteration
    for(auto it:mpp)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }

    //find
    auto its=mpp.find(3);
    cout << its->second << endl;


}

bool comp(pair<int,int> p1,pair<int,int> p2)
{
    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return false;

    if(p1.first>p2.first) return true;
    return false;
}

void sorting()
{

    vector<int> arr={2,46,74,3,76,367,6};
    cout<<"BEFORE: ";
    for(auto it:arr)
    {
        cout<<it<<",";
    }
    cout<<endl;
    cout<<"AFTER(Increasing order): ";
    sort(arr.begin(),arr.end());
    for(auto it:arr)
    {
        cout<<it<<",";
    }
    cout<<endl;
    cout<<"AFTER(Decreasing order): ";
    sort(arr.begin(),arr.end(),greater<int>());
    for(auto it:arr)
    {
        cout<<it<<",";
    }

    cout<<endl<<"Personal request:"<<endl;
    pair<int,int> arr1[] = {{1,2},{2,1},{4,1}};

    sort(arr1,arr1+3,comp);
    for(auto it:arr1)
    {
        cout<<it.first<<","<<it.second<<endl;
    }

}

int main()

{
    sorting();

    return 0;
}
