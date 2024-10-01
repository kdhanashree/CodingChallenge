#include<bits/stdc++.h>
using namespace std;
// Problem : Longest Palindromic Substring
// You are given a string s. Your task is to find and return the longest palindromic substring within the given string. A palindrome is a string that reads the same forwards and backwards.

string compute(string s){

    string word = "";
    int ans = 1;
    string result = "";
    for(int i = 0 ;i <s.length();i++){
         word = "";
        for(int j = i;j<s.length();j++){
            word+=s[j];
            string cop = word;
            reverse(cop.begin(),cop.end());
            if(word  == cop && j-i+1 > ans){
                ans = max(ans , j-i+1);
                result = s.substr(i,ans);
                }
        }
    }
    return result;
}


int main()
{
    string s;

    cout<<"Enter String:";
    cin>>s;
   
    cout<<"Answer:"<<compute(s);
}
//Time-Complexity:O(N).