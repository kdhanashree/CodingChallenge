#include<bits/stdc++.h>
using namespace std;

// Problem : Permutations of a String
// You are given a string s. Your task is to generate and return all possible permutations of the characters in the string. A permutation is a rearrangement of the characters in the string, and each character must appear exactly once in every permutation. If there are duplicate characters in the string, the resulting permutations should also be unique (i.e., no repeated permutations).

   void compute(string s ,unordered_map<string,int>&mp, int i , vector<string> & ans){
	        
	        if(i >= s.length()){
	            if(mp.find(s)==mp.end()){
	                
	                  ans.push_back(s);
	                  mp[s] = 1;
	            }
	          return;
	        }
	        
	        for(int j = i ; j<s.length();j++){
	            
	            swap(s[j],s[i]);
	            compute(s,mp,i+1,ans);
	            swap(s[j],s[i]);
	        }
	    }
int main(){
     
     string s = "";
     cout<<"Enter the string:";
     cin>>s;
      vector<string> ans;
     unordered_map<string,int>mp;
    int i=0;
     compute(s,mp,i,ans);
	for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}
///Time Complexity:O(n*n!) + O(n)
//Space Complexity:O(n!*n)=>ans vector + O(n!)=>map