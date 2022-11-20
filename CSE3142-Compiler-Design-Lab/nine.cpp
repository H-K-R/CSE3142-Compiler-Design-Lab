/***
   Name: Humayra Khanom
   Date: 30.06.2k22
***/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<string> pn = {"Sagor", "Selim", "Salma", "Nipu"};
    set<string> p = {"he", "she", "I", "we", "you", "they"};
    set<string> n = {"book", "cow", "dog", "home", "grass", "rice", "mango"};
    set<string> v = {"read", "eat", "take", "run", "take", "write"};

    string word;
    int count = 0;
    while (cin >> word)
    {
        count++;
        if (count == 1 and !pn.count(word) and !p.count(word))
        {
            cout << "Invalid";
            return 0;
        }
        else if (count == 2 and !v.count(word))
        {
            cout << "Invalid";
            return 0;
        }
        else if (count == 3 and !n.count(word))
        {
            cout << "Invalid";
            return 0;
        }
    }
    cout << "Valid";
}