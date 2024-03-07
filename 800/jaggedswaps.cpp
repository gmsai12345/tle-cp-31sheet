#include <bits/stdc++.h>
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
       int n;
       cin >> n;
       vector<int>v(n);
       int mini =1e7;
       for (int i = 0; i < n; i++)
       {
        cin >> v[i];
       }
       for (int i = 0; i < n; i++)
       {
         mini = min(mini,v[i]);
       }
       
       if(mini==v[0]) 
       {
        cout << "YES"<<endl;
       }
       else 
       {
        cout << "NO" <<endl;
       }
    }

    return 0;
}