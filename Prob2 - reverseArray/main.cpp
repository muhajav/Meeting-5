#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; //the size of vector;
    cout<<"The size of a vector: ";
    cin>>n;

    vector<int> v; //a vector contains all the user input

    for(int i=0; i<n; i++)
    {
        int x; //the value given by users;
        cin>>x;
        v.push_back(x); //push x to vector of v
    }

    vector<int> ans; //a vector contains each value of vector of v after reversing
    for(int i=n-1; i>=0; i--)
    {
        ans.push_back(v[i]); //push the value of vector v from the back
        //push_back() is use to push an element to a vector. The new element is located
        //after the last current index
    }

    for(auto i : ans)
    {
        cout<<i<<' ';
    }
    
}