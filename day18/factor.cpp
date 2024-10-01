#include<bits/stdc++.h>
using namespace std;
// Problem : Count the Number of Divisors of a Number
// Given a positive integer N, your task is to find the total number of divisors (factors) of N. A divisor of N is any integer that divides N without leaving a remainder.

void find_factor(int num)
{
    vector<int> ans;
    ans.push_back(1);

    for(int i=2;i*i<=num;i++)
    {
        if(num%i == 0)
        ans.push_back(i);
    }

    ans.push_back(num);
    cout<<"Factors are:";
    for(auto x:ans)
    {
        cout<<x<<" ";
    }
    return;
}
int main()
{
    int n;
    cout<<"Enter number:";
    cin>>n;
    find_factor(n);

}