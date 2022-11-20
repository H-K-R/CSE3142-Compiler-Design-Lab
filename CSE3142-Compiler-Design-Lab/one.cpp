/***
   Name: Humayra Khanom
   Date: 23.06.2k22
***/

#include <bits/stdc++.h>

using namespace std;

typedef long long int int64;
typedef unsigned long long int uint64;

#define pb push_back

bool otherCharCheck(char x)
{
    string others = ".-,/;':?";
    bool mark = false;
    for (int i = 0; i < others[i]; i++)
    {
        if (others[i] == x)
        {
            mark = true;
            break;
        }
    }
    return mark;
}

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(nullptr);

    char space = ' ';

    string input;
    getline(cin, input);

    int word = 0, letter = 0, digit = 0, other = 0;
    vector<char> letters, digits, others;

    for (int i = 0; input[i]; i++)
    {
        if (input[i] == space) word++;
        else if (otherCharCheck(input[i]))
        {
            other++;
            others.pb(input[i]);
        }
        else if (isdigit(input[i]))
        {
            digit++;
            digits.pb(input[i]);
        }
        else
        {
            letter++;
            letters.pb(input[i]);
        }
    }

    cout << "Words - " << ++word << "\n";
    cout << "Letters - " << letter << "\n";
    for (int i = 0; i < letters.size(); i++)
    {
        if (i == letters.size() - 1)
        {
            cout << letters[i] << "\n";
            continue;
        }
        cout << letters[i] << ", ";
    }
    cout << "Digits - " << digit << "\n";
    for (int i = 0; i < digits.size(); i++)
    {
        if (i == digits.size() - 1)
        {
            cout << digits[i] << "\n";
            continue;
        }
        cout << digits[i] << ", ";
    }
    cout << "Other chars - " << other << "\n";
    for (int i = 0; i < others.size(); i++)
    {
        if (i == others.size() - 1)
        {
            cout << others[i] << "\n";
            continue;
        }
        cout << others[i] << " ";
    }
}