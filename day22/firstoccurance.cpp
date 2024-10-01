#include<bits/stdc++.h>
using namespace std;

// Problem : First Element to Repeat k Times
// You are given an array of integers and an integer k. Your task is to find the first element in the array that appears exactly k times. If no such element exists, return -1

int firstElement(vector<int>& arr, int k) {
        // write code here
        unordered_map<int,int> mp;
        int ans=-1;
        for(auto x: arr)
        {
            mp[x]++;
        }
        for(auto x:arr)
        {
              if(mp[x]==k){
                ans =x;
                break;
            }
        }
        return ans;
}
int main()
{
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
    vector<int> arr(n);

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    return 0;
}
//Time-Complexity:O(2n)
//space : O(n)