#include<bits/stdc++.h>
using namespace std;
// Problem : Valid Parentheses with Multiple Types
// You are given a string s consisting of different types of parentheses: (), {}, and []. Your task is to determine whether the given string is valid.
//implemented only function
bool isValid(string s) {
        map<char,char>mp;
        mp[')']='(';
         mp[']']='[';
          mp['}']='{';
        stack<char>st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
            st.push(s[i]);
            else
            {
                if(st.empty())
                {
                    return 0;
                }
                if(mp[s[i]]==st.top())
                st.pop();
                else
                return 0;
                
            }
        }
        
        if(!st.empty())
        return 0;
        else
        return 1;
    }