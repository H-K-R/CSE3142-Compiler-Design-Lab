#include <bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);
    ifstream infile("input.txt");

    // string word;

    // cin >> word;
    // cout << word << endl;

    // Output : Dear

    string sentence;
    // getline(cin, sentence);
    // cout << sentence << endl;

    // Output : Dear Eram and Farjana,

    while (getline(infile, sentence))
    {
        cout << sentence << endl;
        cout << "Read OK" << endl;
    }
}