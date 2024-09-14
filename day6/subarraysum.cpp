#include<bits/stdc++.h>
using namespace std;
// Problem : Find All Subarrays with Zero Sum
// You are given an integer array arr of size n. Your task is to find all the subarrays whose elements sum up to zero. A subarray is defined as a contiguous part of the array, and you must return the starting and ending indices of each subarray.
 vector<pair<int,int>>compute(vector<int>&array){
     
     unordered_map<int,int>mp;
    vector<pair<int,int>> ans;
     int low = 0 , high = 0;int sum = 0;

     for(int i=0;i<array.size();i++)
     {
        sum+=array[i];
        // mp[i] = sum;

        if(sum == 0) ans.push_back({0 , i});

        int rem = sum;

        if(mp.find(rem)!=mp.end()){
            int left = mp[rem]+1;
            int right = i;
            ans.push_back({left , right});
        }
        mp[sum] = i;
     }
     return ans;
}
int main(){
     
      int n;
      cout<<"Enter Size:";
      cin>>n;
      cout<<"Enter Array elements:";
      vector<int> array(n);
     for(int i=0;i<n;i++)
     {
        cin>>array[i];
     }
      vector<pair<int,int>> ans =  compute(array);
      if(ans.size() == 0){cout<<"{}";return 0;}
    for(int i=0;i<ans.size();i++){
        cout<<"{"<<ans[i].first<<","<<ans[i].second<<"}"<<endl;
    }

}
//Time Complexity:(for the function))=>O(N)
