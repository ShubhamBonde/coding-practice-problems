#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string sol;

    while(n > 0)
    {
        sol.push_back(n%2 + 48);
        n /= 2;
        // cout << "n = " << n <<"\n";
    }

    reverse(sol.begin(), sol.end());
    cout << sol << endl;
}
