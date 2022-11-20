/***
   Name: Humayra Khanom
   Date: 23.06.2k22
***/


#include <bits/stdc++.h>

using namespace std;

map<string, string> rules = {{"S+S", "S"}, {"S*S", "S"}};

int main()
{
    string stc = "", ex, input;
    cin >> input;
    // Input format = id+id*id+id
    for (int i = 0; input[i]; i++)
    {
        if (input[i] == 'i' and input[i + 1] == 'd')
        {
            ex.push_back('x');
            i++;
        }
        else ex.push_back(input[i]);
    }
    for (int i = 0; ex[i]; i++)
    {
        stc += ex[i];
        if (stc.back() == 'x')
        {
            stc.back() = 'S';
        }
        if (rules.find(rules[stc]) != rules.end())
        {
            stc = rules[stc];
        }
        if (i == ex.size() - 1 and stc == "S")
        {
            cout << "Accept\n";
            return 0;
        }
    }
    cout << "Reject\n";
}