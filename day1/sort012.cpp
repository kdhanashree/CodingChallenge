#include<bits/stdc++.h>
using namespace std;

// Problem: Sort an Array of 0s, 1s, and 2s
// You are given an array arr consisting only of 0s, 1s, and 2s. The task is to sort the array in increasing order in linear time (i.e., O(n)) without using any extra space. This means you need to rearrange the array in-place.

 void sort(vector<int> & nums){
    //Dutch National Flag Algorithm
       int low = 0 , mid = 0 , high = nums.size()-1;
        //3 pointers
        while(mid<=high){

            if(nums[mid] == 0){
                swap(nums[low],nums[mid]);
                mid++;
                low++;
            }
            else if(nums[mid] == 1){
                mid++;
            }
            else if(nums[mid] == 2){
                swap(nums[mid] , nums[high]);
                high--;
            }
        }
        return;
}
int main(){
    int n ;
    cout<<"Enter size:";
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<"Sorted Array:"<<endl;
    sort(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}
// Time-Complexity:O(n)
// Space-Complexity:O(1)