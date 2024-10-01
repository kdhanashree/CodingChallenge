#include<bits/stdc++.h>
using namespace std;

// Problem : Find the Leaders in an Array
// You are given an integer array arr of size n. An element is considered a leader if it is greater than all the elements to its right. Your task is to find all such leader elements in the array.
void find_leaders(vector<int> & array){
    
    int maxi = array[array.size()-1];
    for(int i = array.size()-1;i>=0;i--){
       if(array[i]>=maxi){
        maxi = array[i];
         cout<<maxi<<" ";
       }
    }
}
int main()
{
     int n;
     cout<<"Enter the size:";
     cin>>n;
     vector<int> array;
     cout<<"Enter the elements in the array:";
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        array.push_back(t);
    }
     
    find_leaders(array); 
    return 0;
}
//Time Complexity:O(N).
//Space Complexity:O(1).