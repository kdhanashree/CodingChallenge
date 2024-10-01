#include<bits/stdc++.h>
using namespace std;
// Problem : Trapping Rain Water
// You are given an array height[] of non-negative integers where each element represents the height of a bar in a histogram-like structure. These bars are placed next to each other, and the width of each bar is 1 unit. When it rains, water gets trapped between the bars if there are taller bars on both the left and right of the shorter bars. The task is to calculate how much water can be trapped between these bars after the rain.

int trap(vector<int>& height) {
        
        int total = 0;
        int leftmax = 0 , rightmax = 0;
        int n = height.size();
        int left = 0; int right = n-1;
         
        while(left<right)
        {  //it means theres someone 
            if(height[left]<=height[right]){
                if(leftmax>height[left]){
                    //theres someone greater to the left which is greater then current height
                    total+=leftmax - height[left];
                }
                else{
                    leftmax = height[left];
                }
                left++;
            }
            else if(height[right]<height[left]){
                //theres someone greater to the left
                if(rightmax > height[right]){
                    total+=rightmax - height[right];
                }
                else{
                    //there is no greater wall on right hence 
                    //water cant be stored however henceforth the max right wall
                    //will be the current one unless more greater detected
                    rightmax = height[right];
                }
                right--;
            }
        }
        return total;
    }
int main(){
    int n;
    cout<<"Enter no. of walls:";
    cin>>n;
    vector<int> heights(n);

    cout<<"Enter the heights of wall:";
    for(int i=0;i<n;i++){
        cin>>heights[i];
    }

    cout<<"Total Water stored is:"<<trap(heights);
}
//Time Complexity:O(n)
//Space Complexity:O(1)