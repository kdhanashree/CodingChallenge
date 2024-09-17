#include<bits/stdc++.h>
using namespace std;
// Problem : Longest Common Prefix
// You are given an array of strings strs[], consisting of lowercase letters. Your task is to find the longest common prefix shared among all the strings. If there is no common prefix, return an empty string "".

string longestCommonPrefix(vector<string>& strs) {
        
        string ans = strs[0];

        for(auto x: strs){
            //consider the smallest word
            if(x.length()<ans.length())ans = x;
        }
             
         for(int i=0;i<strs.size();i++){
            
            string word = strs[i];
            int j=0;
            while(j<ans.length()){
                if(ans[j] == word[j])j++;
                else{
                    ans.erase(j);
                    break;
                }
            }
         }  
         return ans; 
    }

int main(){
      
      int n;
      cout<<"Enter Size:";
      cin>>n;
      vector<string> strs(n);
      for(int i=0;i<n;i++){
        cin>>strs[i];
      }
      cout<<"Answer is:"<<longestCommonPrefix(strs);
}
//Time Complexity:O(n)+O(n*minlen(string))