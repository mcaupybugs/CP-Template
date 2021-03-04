#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define endl "\n"
#define SIZE 1000001
void solve()
{
    string str;
    cin >> str;
    set<char> s;
    s.insert('H');
    s.insert('Q');
    s.insert('9');
    for (int i = 0; i < str.length(); i++)
    {
        if (s.count(str[i]) == 1)
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    // cin >> t;
    //t = 1;
    for (int i = 1; i <= t; i++)
    {
        //cout << "Case m#" << i << ":" << endl;
        solve();
    }
    return 0;
}