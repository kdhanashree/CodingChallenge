#include<bits/stdc++.h>
using namespace std;
// Problem : Sliding Window Maximum
// You are given an array of integers arr and a positive integer k. Your task is to find the maximum element in each sliding window of size k. The window slides from left to right, one element at a time, and you need to return the maximum element for each of these windows.
    vector<int> max_of_subarrays(int k, vector<int> &arr) {
      
         deque<int> ab; 
        vector<int> ans;
        int low = 0, high = 0;
        
        while (high < arr.size()) {
            // Remove elements from back of deque that are smaller than the current element
            while (!ab.empty() && arr[ab.back()] < arr[high]) {
                ab.pop_back();
            }
            
            // Push the current element index to deque
            ab.push_back(high);
            
            // If the window has reached size k
            if (high - low + 1 == k) {
                // The element at the front of the deque is the maximum for this window
                ans.push_back(arr[ab.front()]);
                
                // Slide the window forward
                if (ab.front() == low) {
                    ab.pop_front();  // Remove elements outside the current window
                }
                low++;  // Move the window forward
            }
            
            high++;  // Expand the window
        }
        
        return ans;
    }
int main()
{
    int k = 3;
    vector<int> arr = {2,7,1,5,90,45,21,67,13,0};
    vector<int> ans = max_of_subarrays(k,arr);

    for(auto x: ans)
    {
        cout<<x<<" ";
    }
    return 0;
}