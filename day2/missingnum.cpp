#include<bits/stdc++.h>
using namespace std;
// Problem: Find the missing number
// You are given an array arr containing n-1 distinct integers. The array consists of integers taken from the range 1 to n, meaning one integer is missing from this sequence. Your task is to find the missing integer.

int find_missing(vector<int> &nums){
      
      int n = nums.size()+1;
    int x = 0;
    for(int i = 1 ; i<=n;i++){
      x = x ^ i;
    }
    for(int i=0;i<nums.size();i++){
        x = x ^ nums[i];
    }
    return x;
}
int main(){
    int n;
    cout<<"Enter size:";
    cin>>n;
    vector<int>nums(n-1);
    for(int i=0;i<n-1;i++){
        cin>>nums[i];
    }
    cout<<"Missing number is:"<<find_missing(nums);
}
//Time-Complexity:O(N).