#include<bits/stdc++.h>
using namespace std;
// Problem : Count Substrings with Exactly K Distinct Characters
// You are given a string s of lowercase English alphabets and an integer k. Your task is to count all possible substrings of s that contain exactly k distinct characters.

 long long int countAtmostk(string &s, int k){
       vector<int> map(128, 0);
        long long int counter=0, begin=0, end=0, d=0; 
        while(end<s.size()){
            if(map[s[end++]]++==0) counter++;
            while(counter>k) if(map[s[begin++]]--==1) counter--;
            d+=end-begin+1;
        }
        return d;
   }
    long long int substrCount (string s, int k) {
    	
    	long long int t1=countAtmostk(s,k);
    	long long int t2=countAtmostk(s,k-1);
    	return t1-t2;
    	
    }

int main()
{
    string s="pqpqs";
    int k=2;
    cout<<substrCount(s,k);
    return 0;

}