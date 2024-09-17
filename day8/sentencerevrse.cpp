#include<bits/stdc++.h>
using namespace std;
// Problem : Reverse a String Word by Word
// You are given a string s that consists of multiple words separated by spaces. Your task is to reverse the order of the words in the string. Words are defined as sequences of non-space characters. The output string should not contain leading or trailing spaces, and multiple spaces between words should be reduced to a single space.

string reverseWords(string s) {
        
        string ans ="";
        int n  = s.length();
        int j = n-1;
        for(int i = n-1 ;i>=0;i--){

            string word ="";
            while(j>=0 && s[j]== ' ')j--;
            while(j>=0 && s[j]!=' '){
                word = s[j] + word;
                j--;
            }
           // return word;
            while(j>=0 && s[j]== ' ')j--;
           if(j>=0)
            word += ' ';
             ans = ans + word;
        }
        return ans;
    }
int main(){
       string s ;
       cout<<"Enter the String:";
      getline(cin,s);
       string ans = reverseWords(s);
       for(int i=0;i<ans.length();i++){
          cout<<ans[i];
       }
       return 0;
}

//Time Complexity:O(n)