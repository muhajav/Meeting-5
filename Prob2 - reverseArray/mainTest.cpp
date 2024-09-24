#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5; //the size of vector;

    vector<int> v = {
        9, 8, 2, 10, 5
    }; //a vector contains all the user input

    vector<int> ans; //a vector contains each value of vector of v after reversing
    for(int i=n-1; i>=0; i--)
    {
        ans.push_back(v[i]); //push the value of vector v from the back
        //push_back() is use to push an element to a vector. The new element is located
        //after the last current index
    }

    vector<int> expectedOutput = {
        5, 10, 2, 8, 9
    };

    if(expectedOutput==ans) cout<<"SUCCESSFULLY"<<'\n';
    else cout<<"UNSUCCESSFULLY"<<'\n';
    
}