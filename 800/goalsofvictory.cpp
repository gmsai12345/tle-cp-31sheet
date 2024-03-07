// #include <bits/stdc++.h>
// #define ll              long long
// #define ull             unsigned long long
// #define pb              push_back
// #define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NUint));
// using namespace std;
// int main()
// {
//    // fastread();
//     int t;
//     cin>>t;
//     while(t--)
//     {
//        int n;
//        cin >> n;
//        int s=0;
//        for (int i = 0; i < n; i++)
//        {
//         int a;
//         cin >>a;
//          s += a;
//        }
//        if(s<0) 
//        {
//         cout << abs(s)<<endl;
//        }
//        else
//        {
//          cout << -s <<endl;
//        }
//        s=0;
//     }

//     return 0;
// }
#include <bits/stdc++.h>
#define ll long long int
#define nline '\n'
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    ll sum = 0;

    for (int i = 0; i < n - 1; i++)
    {
        ll temp;
        cin >> temp;

        sum += temp;
    }

    cout << -(sum) << nline;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll T = 1;
    cin >> T;
    while (T--) 
    {
        solve();
    }
}