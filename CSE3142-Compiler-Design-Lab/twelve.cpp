#include <bits/stdc++.h>

using namespace std;

string syntax;

void replace()
{
    string newSyntax = "";
    for (int i = 0; syntax[i]; i++)
    {
        if (syntax[i] == '(' or syntax[i] == ')' or syntax[i] == '+' or syntax[i] == '-' or syntax[i] == '*' or syntax[i] == '/')
        {
            newSyntax.push_back(syntax[i]);
        }
        else 
        {
            if (i and newSyntax[newSyntax.size() - 1] != 'E') newSyntax.push_back('E');
        }
    }
    syntax = newSyntax;
}

bool operatorCheck()
{
    int n = syntax.size() - 1;
    if (syntax[0] == '+' or syntax[0] == '-' or syntax[0] == '*' or syntax[0] == '/')
    {
        return false;
    }
    if (syntax[n] == '+' or syntax[n] == '-' or syntax[n] == '*' or syntax[n] == '/')
    {
        return false;
    }
    for (int i = 1; syntax[i]; i++)
    {
        if (syntax[i] == '+' or syntax[i] == '-' or syntax[i] == '*' or syntax[i] == '/')
        {
            if (syntax[i - 1] == '+' or syntax[i - 1] == '-' or syntax[i - 1] == '*' or syntax[i - 1] == '/')
            {
                return false;
            }
            if (syntax[i - 1] == '(')
            {
                return false;
            }
        }
        if (syntax[i - 1] == '+' or syntax[i - 1] == '-' or syntax[i - 1] == '*' or syntax[i - 1] == '/')
        {
            if (syntax[i] == ')')
            {
                return false;
            }
        }
    }
    return true;
}

bool bracketCheck()
{
    stack<char> brackets;
    for (int i = 0; syntax[i]; i++)
    {
        if (syntax[i] == '(') brackets.push('(');
        else if (syntax[i] == ')')
        {
            if (brackets.size()) brackets.pop();
            else return false;
        }
    }
    if (brackets.size() == 0) return true;
    else return false;
}

int main()
{
    cin >> syntax;
    cout << isalpha('U');
    if (operatorCheck() and bracketCheck()) cout << "Valid\n";
    else cout << "Invalid\n";
}