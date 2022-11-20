#include <bits/stdc++.h>

// Name: Humayra Khanom
// Date: 30.06.2k22

using namespace std;

typedef long long int int64;
typedef unsigned long long int uint64;

#define pb push_back

map<char, string> dept = {
    {'C', "Computer Science & Engineering"},
    {'I', "Information & Communication Engineering"},
    {'M', "Material Science & Engineering"},
    {'E', "Electrical & Electronics Engineering"}
};

map<char, string> course = {
    {'1', "Computer Fundamentals"},
    {'2', "Data Structures"},
    {'3', "Design & Analysis of ALgorithm"},
    {'4', "Compiler Design"},
    {'5', "Theory of Computation"},
    {'6', "Database Management System"},
    {'7', "Computer NEtwork"}
};

map<char, string> year = {
    {'1', "1st Year"},
    {'2', "2nd Year"},
    {'3', "3rd Year"},
    {'4', "4th Year"}
};

map<char, string> semester = {
    {'1', "1st Semester"},
    {'2', "2nd Semester"}
};

map<int, string> type = {
    {'1', "Theory"},
    {'2', "Lab"}
};

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(nullptr);

    string code;
    cin >> code;

    cout << dept[code[0]] << ", "
         << year[code[4]] << ", "
         << semester[code[5]] << ", "
         << course[code[6]] << ", "
         << type[code[7]] << ".";

    return 0;
}