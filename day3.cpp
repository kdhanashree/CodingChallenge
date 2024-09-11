#include<bits/stdc++.h>
using namespace std;
//Problem Statement:Find the duplicate number
// You are given an array arr containing n+1 integers, where each integer is in the range [1, n] inclusive. There is exactly one duplicate number in the array, but it may appear more than once. Your task is to find the duplicate number without modifying the array and using constant extra space.

int find_duplicate(vector<int>& array) {
        
        int fast = array[0];
        int slow = array[0];
         //it is necessary for the array to have a duplicate number or else
         //belo loop will go infinite.
        while(1){
            slow = array[slow];
            fast = array[array[fast]];
          //get to the intersection point this is just a common point 
          //and not the duplicate number it implies the there is a loop 
            if(slow == fast){
                break;
            }
        }
        slow = array[0];
        //finding the starting of the loop i.e the duplicate number
        while(slow!=fast){
            slow = array[slow];
            fast = array[fast];
        }
        return slow;
        
    }
int main(){

   int n;
   cout<<"Enter n:";
   cin>>n;
   vector<int>array(n+1);
 
   cout << "Enter the elements\n";
    for (int i = 0; i <= n; i++) {
        cout << "Input element " << i + 1 << ": "; 
        cin >> array[i];  
    }
  
  int ans =  find_duplicate(array);
  cout<<"Duplicate:"<<ans;
  return 0;

}
//Time Complexity : O(n)
//Floyd’s Cycle Finding Algorithm is used