/***
   Name: Humayra Khanom
   Date: 08.08.2k22
***/



#include<bits/stdc++.h>

using namespace std;

vector<string> tree(50, "                              ");

void syntaxTree(string ex);
bool isOp(char x);

int main()
{
    string expression;
    // Input format = A+B*C/D*G+F-T
    cin >> expression;
    syntaxTree(expression);
    cout << "Syntax Tree:\n";
    for (string x: tree)
    {
        cout << x << "\n";
    }
}

void syntaxTree(string ex)
{
    int row = 0, col = 2;
    for (int i = 0; ex[i]; i++)
    {
        if (isOp(ex[i]))
        {
            tree[row][col] = ex[i];
            tree[row + 1][col - 1] = '/';
            tree[row + 1][col + 1] = '\\';
            tree[row + 2][col - 2] = ex[i - 1];
            row += 2;
            col += 2;
        }
    }
    tree[row][col] = ex.back();
}

bool isOp(char x)
{
    return (x == '+' or x == '-' or x == '*' or x == '\\');
}
