#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string x)
{
    x[0] = tolower(x[0]);
    string x1 = x;
    x1[0] = tolower(x1[0]);
    reverse(x1.begin(), x1.end());
    if (x1.compare(x) == 0)
    {
        return true;
    }
    return false;
}

bool isVowel(char x)
{
    if (tolower(x) == 'a' or tolower(x) == 'e' or tolower(x) == 'i' or tolower(x) == 'o' or tolower(x) == 'u')
    return true;
    return false;
}

int main()
{
    //freopen("input.txt", "r", stdin);
    map<string, pair<int, int>> words;
    int index = 1;
    string line;
    while (getline(cin, line))
    {
        //freopen("output.txt", "w", stdout)
        //cout << line;
        for (int i = 0; line[i]; i++)
        {
            if (line[i] == ' ' or line[i] == ',') continue;
            string s;
            int j = i;
            int c = i + 1;
            while (true)
            {
                s += line[j++];
                if (line[j] == ' ' or line[j] == ',') break;
                i++;
                if (i == line.size()) break;
            }
            words[s].first = index;
            words[s].second = c;
            if (i >= line.size())
            {
                break;
            }
        }
        index++;
    }  
    vector<pair<string, pair<int, int>>> p, v;
    for (auto x: words)
    {
        if (isPalindrome(x.first))
        {
            p.push_back({x.first, {x.second.first, x.second.second}});
            //cout << x.second.first << ", " << x.second.second << " is palindrome\n";
        }
        if (isVowel(x.first[0]))
        {
            v.push_back({x.first, {x.second.first, x.second.second}});
        }
    }
    cout << "Palindromes :\n";
    for (auto x: p)
    {
        cout << x.second.first << ", " << x.second.second << " " << x.first << "\n";
    }
    cout << "\nVowels :\n";
    for (auto x: v)
    {
        cout << x.second.first << ", " << x.second.second << " " << x.first << "\n";
    }
}
