#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <algorithm>
#include <cassert>
#include <functional>
#include <iterator>
#include <vector>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        vector<int>v;
        for(int i =0;i<n;i++)
        {
            int a;
            cin >>a;
           v.pb(a);
        }

        // important you will have to check if k <1 and already sorted 
        if(k>1||is_sorted(v.begin(),v.end()))
        {
            cout << "YES"<<endl;
        }
        else
        {
            cout << "NO"<<endl;
        }
    }

    return 0;
}