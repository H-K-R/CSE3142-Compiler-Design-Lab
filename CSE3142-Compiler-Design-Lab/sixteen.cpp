/***
   Name: Humayra Khanom
   Date: 04.08.2k22
***/

#include <bits/stdc++.h>

using namespace std;

int precedence(char x)
{
    if (x == '^') return 3;
    else if (x == '/' or x == '*') return 2;
    else if (x == '+' or x == '-') return 1;
    else return -1;
}

void infixToPostfix(string infix)
{
    stack<char> st;
    string postfix = "";
    for (int i = 0; infix[i]; i++)
    {
        char x = infix[i];
        // If char is operand, then add it to postfix
        if ((x >= 'a' and x <= 'z') or (x >= 'A' and x <= 'Z'))
        {
            postfix += x;
        }
        else if (x == '(')
            st.push(x);
        // If char is ')' then pop & add to postfix until '('
        else if (x == ')')
        {
            while (st.top() != '(')
            {
                postfix += st.top();
                st.pop();
            }
            st.pop();
        }
        // If char is operator
        else
        {
            while (!st.empty() and precedence(x) <= precedence(st.top()))
            {
                postfix += st.top();
                st.pop();
            }
            st.push(x);
        }
    }
    // Pop all chars from stack
    while (!st.empty())
    {
        postfix += st.top();
        st.pop();
    }
    cout << postfix;
}

int main()
{
    string infix = "a+b*(c^d-e)^(f+g*h)-i";
    // postfix = "abcd^e-fgh*+^*+i-"
    infixToPostfix(infix);
    return 0;
}