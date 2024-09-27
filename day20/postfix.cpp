#include<bits/stdc++.h>
using namespace std;
// Problem : Evaluate a Postfix Expression
// Given a postfix expression (also known as Reverse Polish Notation), your task is to evaluate the expression and return the result. The expression can contain integers and the four basic arithmetic operators +, -, *, and /. Assume that the input is always valid and the division operator performs integer division, truncating towards zero.

int main()
{
    string str=  "15 7 1 1 + - / 3 * 2 1 1 + + -";
    int i=0;
    stack<char>exp;
    stack<int>st;
    int s;
    int sign=0;
    while(i<str.length())
    {    
      
        if(str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/')
         {
            if(st.empty())
            {
              if(str[i]=='-')
              sign=-1;
              if(str[i]=='+')
              sign=1;
            
            }
            else
            {
            int temp2=st.top();
            st.pop();
            int temp1=st.top();
            st.pop();
            if(str[i]=='+')
            s=temp1+temp2;
            else if(str[i]=='-')
            s=temp1-temp2;
            else if(str[i]=='*')
            s=temp1*temp2;
            else
            s=temp1/temp2;
            st.push(s);
            }
            //cout<<s<<" ";
         }
         else if(str[i]!=' ')
         {
            string t="";
            while(i<str.length()&&str[i]!=' ')
           { t+=str[i];
           i++;
           }
            int temp=stoi(t);
            if(sign!=0)
            {
                temp=temp*sign;
                sign=0;
            }

            st.push(temp);
         }
         i++;
    }
   cout<<st.top();
   return 0;

}
