/***
   Name: Humayra Khanom
   Date: 04.08.2k22
***/

#include <bits/stdc++.h>
using namespace std;

typedef long long int int64;
typedef unsigned long long int uint64;

#define pb push_back

bool isKeyword(string x)
{
    vector<string> keywords = {"true", "false", "or", "and", "for", "if", "else", "do", "while", "break", "continue", "int", "float", "double", "bool", "long", "unsigned", "char", "string", "void", "auto", "new", "switch", "namespace", "class", "const", "sizeof", "typedef", "xor", "delete", "nullptr"};
    for (int i = 0; i < keywords.size(); i++)
    {
        if (keywords[i].compare(x) == 0)
        {
            return true;
        }
    }
    return false;
}

bool isOperator(string x)
{
    vector<string> operators = {"+", "-", "*", "/", "%"};
    for (int i = 0; i < operators.size(); i++)
    {
        if (operators[i].compare(x) == 0)
        {
            return true;
        }
    }
    return false;
}

bool isIdentifier(string x)
{
    if (isdigit(x[0])) return false;
    if (x[0] == '_' or (tolower(x[0]) >= 'a' and tolower(x[0]) <= 'z'))
    {
        return true;
    }
    return false;
}

bool isConstant(string x)
{
    char cot = '"';
    if (x[0] == cot and x[x.size() - 1] == cot)
    {
        return true;
    }
    for (int i = 0; x[i]; i++)
    {
        if (isdigit(x[i]) or x[i] == '.')
        {
            continue;
        }
        return false;
    }
    return true;
}

int main()
{
    string word;
    cin >> word;
    if (isKeyword(word))
    {
        cout << "Keyword\n";
    }
    else if (isIdentifier(word))
    {
        cout << "Identifier\n";
    }
    else if (isOperator(word))
    {
        cout << "Operator\n";
    }
    else if (isConstant(word))
    {
        cout << "Constant\n";
    }
    else cout << "Invalid\n";
}