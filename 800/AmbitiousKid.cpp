#include <iostream>
#include <vector>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
 //   fastread();
   // int t;
 //   cin>>t;
    // while(t--)
    // {
       int n;
       cin >> n;
       vector<int>v(n);
       for (int i = 0; i < n; i++)
       {
        
        cin >> v[i];
       }
       int mini= 1e9;
       for (int i = 0; i < n; i++)
       {
         mini = min(mini,abs(v[i]));
       }
       cout << mini <<endl;
       
//    }

    return 0;
}