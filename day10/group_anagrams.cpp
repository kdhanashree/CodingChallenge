#include<bits/stdc++.h>
using namespace std;
// Problem : Group Anagrams
// You are given an array of strings strs[]. Your task is to group all the strings that are anagrams of each other. An anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string , vector<string>>mp;

        for(auto x: strs){
            string word = x;
            sort(word.begin(),word.end());
            mp[word].push_back(x);
        }
        vector<vector<string>> ans;
        for(auto x: mp){
            ans.push_back(x.second);
        }
        return ans;
    }

int main()
{
    int n;
    cout<<"Enter size of the vector:";
    cin>>n;
    vector<string> s(n);

    for(int i=0;i<n;i++){  
        cin>>s[i];
    }
    vector<vector<string>> ans = groupAnagrams(s);
    for(auto x: ans){
        for(auto k:x)
        {
        cout<<k<<" ";
        }
        cout<<endl;
    }

}
//Time-Complexity:
//Sorting:
//=>for one string (k*logK)=>k is size of string
//for each string : (n * k*logK)
//map insertion:O(n) as it is unordered map
//Total = O(n+(n*k*logk)) == O(n*k*logK).
//Space Complexity: O(n*avg length of string)