#include <bits/stdc++.h>
using namespace std;

unordered_map<char, int> m = {{'(', -1}, {'{', -2}, {'[', -3}, {')', 1}, {'}', 2}, {']', 3}};
string check(string s)
{
    stack<char> c;
    for (char sym : s)
    {
        if (m[sym] < 0)
        {
            c.push(sym);
        }
        else if (c.empty())
        {
            return "NO";
        }
        else
        {
            char top = c.top();
            c.pop();
            if (m[top] + m[sym] != 0)
                return "NO";
        }
    }
    if (c.empty())
        return "YES";
    return "NO";
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        cout << check(s) << endl;
    }
    return 0;
}
