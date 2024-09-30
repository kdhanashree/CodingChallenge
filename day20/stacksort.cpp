#include<bits/stdc++.h>
using namespace std;
// Problem : Sort a Stack Using Recursion
// Given a stack of integers, your task is to write a function that sorts the stack in ascending order. You are not allowed to use any additional data structure like arrays, lists, or another stack. The only operations you are allowed to perform are push, pop, and peek on the stack. The sorting must be performed using recursion only.

void Sort(int x , stack<int> & st)
{
    if(st.empty()|| st.top()<x){
        st.push(x);
        return;
    }
    else{
        int w = st.top();
        st.pop();
        Sort(x,st);
        st.push(w);
    }
    
}
void reverse(stack<int> &st)
{
    if(st.empty())return;
    
    int x = st.top();
    st.pop();
    
    reverse(st);
    Sort(x,st);
}
int main()
{
       stack<int> stack;
        stack.push(78);
        stack.push(90);
        stack.push(24);
        stack.push(17);
        reverse(stack);
        cout<<"Entered order: (top to bottom) 17->24->90->74"<<endl;
        cout<<"Sorted order(t to b):";
        while(!stack.empty())
        {
            cout<<stack.top()<<"  ";
            stack.pop();
        }

}