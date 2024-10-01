#include<bits/stdc++.h>
using namespace std;
// Problem : Reverse a Stack Using Recursion
// You are given a stack of integers, and your task is to write a function that reverses the stack using recursion. You are not allowed to use any additional data structure (like arrays, lists, or another stack). The only operations you are allowed to perform are push, pop, and peek on the stack. The reversal must be done using recursion only.
void reverse(stack<int> &st , int w)
{
    if(st.empty())st.push(w);
    else{
        int q = st.top();
        st.pop();
        reverse(st,w);
        st.push(q);
    }
}
void loop(stack<int> &st)
{
    if(st.empty())return;
    int x = st.top();
    st.pop();
    loop(st);
    reverse(st,x);
}
int main()
{
     stack<int> stack;
        stack.push(4);
        stack.push(3);
        stack.push(2);
        stack.push(1);
        loop(stack);
        cout<<"Entered order: (top to bottom) 1,2,3,4"<<endl;
        cout<<"Reversed order(t to b):";
        while(!stack.empty())
        {
            cout<<stack.top()<<"  ";
            stack.pop();
        }
}

