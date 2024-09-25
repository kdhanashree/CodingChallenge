#include<bits/stdc++.h>
using namespace std;
// Problem : Prime Factorization of a Number
// Given a positive integer N, your task is to find its prime factorization. Return a list of prime numbers that multiply together to give N. If N is prime, the output should be a list containing only N.

vector<int> prime_factors(int n){
    vector<int> ans;
    while(n!=0 && n%2 == 0){
        n /=2;
        ans.push_back(2);
    }

    for(int i=3;i*i<=n;i++)
    {
        while(n%i == 0){
            n/=i;
            ans.push_back(i);
        }
    }

    if(n>2){
        ans.push_back(n);
    }
    return ans;
}
int main(){
    cout<<"Enter  a number:";
    int n;
    cin>>n;

    vector<int> ans = prime_factors(n);

    cout<<"Prime Factors:";
    for(auto x: ans)
    {
        cout<<x<<" ";
    }

}
//Time-Complexity:O(sqrt(n)).