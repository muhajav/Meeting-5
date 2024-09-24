#include <bits/stdc++.h>
using namespace std;

vector<string> v(101);

int main()
{

    for(int i=0; i<100; i++)
    {
        int number = i+1;
        if(number%3==0 && number%5==0)
        {
            v[i] = "Fizzbuzz";
        } else if(number%3==0)
        {
            v[i] = "Fizz";
        } else if(number%5==0)
        {
            v[i] = "Buzz";
        } else {
            v[i] = to_string(number);
        }
    }

    for(auto i : v)
    {
        cout<<i<<' ';
    }
    cout<<'\n';

}