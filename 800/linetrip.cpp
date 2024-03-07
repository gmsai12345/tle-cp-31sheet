#include <iostream>
#include <vector>
#include <algorithm>
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
        // the only points that we can take in consideration are from 0 to x
        // and from that we have to check if possible or not 
        int n,x;
        cin >> n >> x;
        vector<int>v;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >>a;
            v.pb(a);
        }
        int mini = 1e8;
        for(int i =1;i<=x;i++)
        {
            int minf = i;
           // int comp=0;
            for (int j = 0; j <= x; j++)
            {
                   if(j==x)
            {
                mini = min(mini,i);
                break;
            }
            if(minf>0)
                {
                    auto it =find(v.begin(),v.end(), j);
                  if(it!=v.end())
                 {
                 minf += i;
                 }
                 
                }
               if(minf==0)
               {
                auto it = find(v.begin(),v.end(), j);
                 if(it!=v.end())
                 {
                 minf += i;
                 }
                 else
                 {
                    break;
                 }
               }
               minf--;
              
            }
        }
        cout << mini <<endl;
        
    }

    return 0;
}