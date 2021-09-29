#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		long long m, r1, r2, r3;
		cin >> m >> r1 >> r2 >> r3;
		int rem = m % 4;

		if (!rem) cout << 0 << endl;
		if (rem == 1) cout << min(r3, min(r2+r1, r1*3)) << endl;
		if (rem == 2) cout << min(r2, min(r1+r2, r3+r2)) << endl;
		if (rem == 3) cout << min(r1, min(r2+r3, r3*3)) << endl;
	}
}
