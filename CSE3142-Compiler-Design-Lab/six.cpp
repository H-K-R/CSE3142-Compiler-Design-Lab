/***
   Name: Humayra Khanom
   Date: 04.08.2k22
***/

#include <bits/stdc++.h>
using namespace std;

typedef long long int int64;
typedef unsigned long long int uint64;

#define pb push_back

bool isChar(string x)
{
    if (x.size() < 4)
    {
        return false;
    }
    if (x[0] == 'c' and x[1] == 'h' and x[2] == '_')
    {
        return true;
    }
    return false;
}

bool isBinaryVariable(string x)
{
    if (x.size() < 4)
    {
        return false;
    }
    if (x[0] == 'b' and x[1] == 'n' and x[2] == '_')
    {
        return true;
    }
    return false;
}

bool isBinary(string x)
{
    if (x[0] == '1')
    {
        return false;
    }
    for (int i = 1; x[i]; i++)
    {
        if (x[i] != '0' and x[i] != '1')
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string word;
    cin >> word;
    if (isChar(word))
    {
        cout << "Character variable\n";
    }
    else if (isBinaryVariable(word))
    {
        cout << "Binary Variable\n";
    }
    else if (isBinary(word))
    {
        cout << "Binary Number\n";
    }
    else cout << "Invalid Input or Undefined\n";
}