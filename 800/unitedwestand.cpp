// #include <bits/stdc++.h>
// #define ll              long long
// #define ull             unsigned long long
// #define pb              push_back
// #define fastread()      (ios_base::sync_with_stdio(false),cin.tie(NULL));
// using namespace std;

// int main()
// {
//     fastread();
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> v(n); // Resize v to size n
//         vector<int> a, b;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> v[i];
//         }
//         int maxi = -1e9;
//         for (int i = 0; i < n; i++)
//         {
//             maxi = max(maxi, v[i]);
//         }
//         a.pb(maxi);
//         for (int i = 0; i < n; i++)
//         {
//             if (v[i] != maxi)
//                 b.push_back(v[i]);
//         }
//         sort(b.begin(), b.end());
//         if (b.empty() || b[0] % a[0] == 0) // Check if b is empty before accessing b[0]
//         {
//             cout << -1 << endl;
//         }
//         else
//         {
//             cout << a[0] << endl;
//             for (int i = 0; i < b.size(); i++)
//             {
//                 cout << b[i] << " ";
//             }
//             cout << endl;
//         }
//     }

//     return 0;
// }
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
void solve() {
	int n = 0; cin >> n; 
	vector<int> inp; inp.assign(n, 0);
	for (auto& x : inp) cin >> x;
	sort(inp.begin(), inp.end());
	if (inp.back() == inp[0]) {
		cout << "-1\n";
		return;
	}
	else {
		int it = 0;
		while (inp[it] == inp[0]) it++;
		cout << it << " " << n - it << "\n";
		for (int j = 0; j < it; ++j) cout << inp[j] << " ";
		for (int j = it; j < n; ++j) cout << inp[j] << " ";
	}
}
 
int main() {
	int t = 0; cin >> t;
	while (t--) solve();
	return 0;
}