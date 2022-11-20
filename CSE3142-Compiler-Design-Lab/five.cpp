/***
   Name: Humayra Khanom
   Date: 30.06.2k22
***/


#include <bits/stdc++.h>
using namespace std;

typedef long long int int64;
typedef unsigned long long int uint64;

#define pb push_back

bool isVariable(string x)
{
    bool mark = true;
    if ((tolower(x[0]) > 'h') or (tolower(x[0]) < 'o'))
    {
        mark = false;
    }
    for (int i = 1; x[i]; i++)
    {
        if (tolower(x[i]) >= 'a' and tolower(x[i]) <= 'z')
        {
            continue;
        }
        else if (x[i] >= '0' and x[i] <= '9')
        {
            continue;
        }
        else
        {
            mark = false;
            break;
        }
    }
    return mark;
}

int isFloat(string x)
{
    int count = 0;
    for (int i = x.size() - 1; x[i]; i--)
    {
        if (x[i] == '.') break;
        count++;
    }
    return count;
}

int main()
{
    string word;
    cin >> word;
    if (isVariable(word))
    {
        cout << "Float Variable";
    }
    else if (isFloat(word) == 2)
    {
        cout << "Float Number";
    }
    else if (isFloat(word) > 2)
    {
        cout << "Double Number";
    }
    else cout << "Invalid Input or Undefined";
    return 0;
}