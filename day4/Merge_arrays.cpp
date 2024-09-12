#include<bits/stdc++.h>
using namespace std;

// Problem : Merge Two Sorted Arrays
// You are given two sorted arrays arr1 of size m and arr2 of size n. Your task is to merge these two arrays into a single sorted array without using any extra space (i.e., in-place merging). The elements in arr1 should be merged first, followed by the elements of arr2, resulting in both arrays being sorted after the merge.

void merge_array(vector<int> &arr1,vector<int>&arr2,int n , int m){
    int left = n-1;
    int right = 0;
   
     while(left>=0 && right<=m-1){
        if(arr1[left]>arr2[right]){
            swap(arr1[left],arr2[right]);
            left--;
            right++;
        }
        else if(arr1[left]<=arr2[right])break;
     }
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());

     return;
}
int main(){
    int n , m;

    cout<<"Enter the size of first array:";
    cin>>n;
    cout<<"Enter the size of second array:";
    cin>>m;

    vector<int>arr1(n);
    vector<int>arr2(m);

    cout<<"Enter elements of array1:";
    for(int i=0;i<n;i++){
        cin>>arr1[i] ;
    }
    cout<<"Enter elements of array2:";
    for(int i=0;i<m;i++){
        cin>>arr2[i] ;
    }

    merge_array(arr1,arr2,n,m);

    cout<<"Result:\n";
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
    for(int i=0;i<m;i++){
        cout<<arr2[i]<<" ";
    }

   return 0;
}
//Time complexity (of merge_array function): O(min(arr1,arr2))[for swapping] + O(N*logN) + O(M*logM)[for sorting of respective arrays].