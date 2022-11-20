
/***
   Name: Humayra Khanom
   Date: 23.06.2k22
***/

#include <bits/stdc++.h>
using namespace std;

typedef long long int int64;
typedef unsigned long long int uint64;

#define pb push_back

bool isVowel(char x)
{
    x = tolower(x);
    if (x == 'a' or x == 'e' or x == 'i' or x == 'o' or x == 'u')
    {
        return true;
    }
    return false;
}

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<string> input;
    string temp;
    while (cin >> temp)
    {
        input.pb(temp);
    }

    vector<char> vowels, consonants;
    vector<string> vowelWords, consonantWords;

    for (int i = 0; i < input.size(); i++)
    {
        if (isVowel(input[i][0]))
        {
            vowelWords.pb(input[i]);
        }
        else consonantWords.pb(input[i]);
        for (int j = 0; input[i][j]; j++)
        {
            if (isVowel(input[i][j]))
            {
                vowels.pb(input[i][j]);
            }
            else consonants.pb(input[i][j]);
        }
    }

    cout << "Vowels - " << vowels.size() << "\n";
    for (int i = 0; i < vowels.size(); i++)
    {
        if (i == vowels.size() - 1)
        {
            cout << vowels[i] << "\n";
            continue;
        }
        cout << vowels[i] << ", ";
    }

    cout << "\nConsonants - " << consonants.size() << "\n";
    for (int i = 0; i < consonants.size(); i++)
    {
        if (i == consonants.size() - 1)
        {
            cout << consonants[i] << "\n";
            continue;
        }
        cout << consonants[i] << ", ";
    }

    cout << "\nString starting with vowels - " << "\n";
    for (int i = 0; i < vowelWords.size(); i++)
    {
        cout << vowelWords[i] << " ";
    }

    cout << "\n\nString starting with consonants - " << "\n";
    for (int i = 0; i < consonantWords.size(); i++)
    {
        cout << consonantWords[i] << " ";
    }
}