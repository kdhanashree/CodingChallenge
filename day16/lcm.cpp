#include<bits/stdc++.h>
using namespace std;
// Problem : LCM (Least Common Multiple) of Two Numbers
// You are given two integers, N and M. Your task is to find the Least Common Multiple (LCM) of these two numbers. The LCM of two integers is the smallest positive integer that is divisible by both N and M.

int gcd(int a , int b){
    if(b == 0)return a;
    return gcd(b,a%b);
}

int main(){
    int x,y;
    cout<<"Enter 2 numbers:";
    cin>>x>>y;
    // Formula=> x * y = LCM(x,y) * GCD(x,y)
    int lcm = (x*y)/gcd(x,y);
    cout<<"LCM of 2 numbers is:"<<lcm;
    return 0;
}
//Time-Complexity:O(log(min(x,y)))