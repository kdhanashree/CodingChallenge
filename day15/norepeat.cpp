#include<bits/stdc++.h>
using namespace std;

// Problem : Find the Longest Substring Without Repeating Characters
// You are given a string S, and your task is to find the length of the longest substring that contains no repeating characters. A substring is a contiguous block of characters in the string.

int find_longest_substr(string s){
     int ans = 0;
        unordered_map<int,int> mp;
        int low = 0 , high = 0;
        int count ;
        while(high<s.length())
        {
            mp[s[high]]++;
             count = mp.size();//no. of unique elements in the map

            if(count == high-low+1){
                //it means all elements are unique
                ans = max(ans,count);
            }
            else{

                while(high-low+1 >count){
                    mp[s[low]]--;
                    if(mp[s[low]] == 0){
                        mp.erase(s[low]);
                        count = mp.size();
                    }
                    low++;    
                }
            }
            high++;

        }
        return ans;
}
int main()
{
    string s;
    cin>>s;
    cout<<"Longest Substring without repeting charachters is:"<<find_longest_substr(s);
}
//Time Complexity:O(N)
//space complexity:O(N)-map