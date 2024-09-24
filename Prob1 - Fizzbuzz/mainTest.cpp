#include <bits/stdc++.h>
using namespace std;

vector<string> v(100);

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

    vector<string> vTest = {"1", "2", "Fizz", "4", "Buzz", "Fizz", "7", "8", "Fizz", "Buzz", 
                            "11", "Fizz", "13", "14", "Fizzbuzz", "16", "17", "Fizz", "19", 
                            "Buzz", "Fizz", "22", "23", "Fizz", "Buzz", "26", "Fizz", "28", 
                            "29", "Fizzbuzz", "31", "32", "Fizz", "34", "Buzz", "Fizz", "37", 
                            "38", "Fizz", "Buzz", "41", "Fizz", "43", "44", "Fizzbuzz", "46", 
                            "47", "Fizz",  "49",  "Buzz",  "Fizz", "52", "53", "Fizz", "Buzz", 
                            "56", "Fizz", "58", "59", "Fizzbuzz", "61", "62", "Fizz", "64", 
                            "Buzz", "Fizz", "67", "68", "Fizz", "Buzz", "71", "Fizz", "73", 
                            "74", "Fizzbuzz", "76", "77", "Fizz", "79", "Buzz", "Fizz", "82", 
                            "83", "Fizz", "Buzz", "86", "Fizz", "88", "89", "Fizzbuzz", "91", 
                            "92", "Fizz", "94", "Buzz", "Fizz", "97", "98", "Fizz", "Buzz"};
    
    if(vTest == v) cout<<"The test SUCCESSFULLY passed"<<'\n';
    else cout<<"The test UnSUCCESSFULLY passed"<<'\n';

}